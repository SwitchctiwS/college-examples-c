/*
Names: Jared Thibault, Zachary Gosden
Date: 05 Feb 2015

Program description: Finds and displays the Thevenin voltage and resistance, along with the voltage and current of RL from user-entered values.
*/

#include "main.h"

int main(void)
{
	float 
		R1, R2, R3, R4, R12, RL, RT, Rth,   //resistances
		E, Eth, Va, VRL,                    //voltages
		IT, IR3, IRL;                       //currents


	//Starup message
	printf("This program takes the value of five resistances and finds the Thevenin voltage and resistance.\nIt also finds the voltage and current through the load resistor.\n");

	//Get resistor values
	printf("\nPlease enter the value for R1 in Ohms: ");
	fflush(stdin);
	scanf_s("%f", &R1);

	printf("Please enter the value for R2 in Ohms: ");
	fflush(stdin);
	scanf_s("%f", &R2);

	printf("Please enter the value for R3 in Ohms: ");
	fflush(stdin);
	scanf_s("%f", &R3);

	printf("Please enter the value for R4 in Ohms: ");
	fflush(stdin);
	scanf_s("%f", &R4);

	printf("Please enter the value for RL in Ohms: ");
	fflush(stdin);
	scanf_s("%f", &RL);

	printf("Please enter the value for E in Volts: ");
	fflush(stdin);
	scanf_s("%f", &E);

	//Find Thevenin resistance
	R12 = 1 / ((1 / R1) + (1 / R2));
	Rth = 1 / ((1 / (R12 + R3)) + (1 / R4));

	//Find Thevenin Voltage
	RT = 1 / ((1 / (R4 + R3)) + (1 / R2)) + R1;
	IT = E / RT;
	Va = E - IT*R1;
	IR3 = IT - (Va / R2);
	Eth = Va - IR3*R3;

	//Find current RL, voltage RL
	IRL = Eth / (Rth + RL);
	VRL = IRL*RL;

	//Display values
	printf("\nThe Thevenin... \nResistance is: %.3f\nVoltage is: %.3f\n\nThe voltage through RL is %.3f, the current is %.3f\n", Rth, Eth, VRL, IRL);

	printf("\nPress any key to exit.");

	getch();

	return 0;
}