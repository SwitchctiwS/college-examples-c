/*
Name: Jared Thibault
Date: 26 March 2015

Program Description:
*/

#include "main.h"

void capVolt(void)
{
	int check = 0, i;
	float cap, vc, tau;

	printf("\nWhat is the value of the capacitor in microFarads?\n");

	do
	{
		fflush(stdin);
		check = scanf_s("%f", &cap);
		if ((check == 0) || (cap <= 0))
		{
			printf("\nThat was not a valid number\n");
			check = 0;
		}

	} while (check == 0);

	cap = cap * pow(10, -6);
	tau = R * cap;

	printf("\nThe voltage at...\n");
	for (i = 1; i <= 5; i++)
	{
		vc = E * exp(i * -tau);

		printf("%d tau is %f volts\n", i, vc);
	}

	printf("\n");

}

void capCurrent(void)
{
	int check = 0, i;
	float cap, ic, tau;

	printf("\nWhat is the value of the capacitor in microFarads?\n");

	do
	{
		fflush(stdin);
		check = scanf_s("%f", &cap);
		if ((check == 0) || (cap <= 0))
		{
			printf("\nThat was not a valid number\n");
			check = 0;
		}

	} while (check == 0);

	cap = cap * pow(10, -6);
	tau = R * cap;

	printf("\nThe current at...\n");
	for (i = 1; i <= 5; i++)
	{
		ic = -(E/R) * exp(i * -tau);

		printf("%d tau is %f amps\n", i, ic);
	}

	printf("\n");

}

int main(void)
{
	int menuOption, exit = 0;

	do
	{
		menuOption = -1;

		printf("Press the corresponding number to go to that option.\n");
		printf("\n1. Capacitor Voltage\n2. Capacitor Current\n0. Restart Menu\n\nPress any other number to exit.\n");

		fflush(stdin);
		scanf_s("%d", &menuOption);

		switch (menuOption)
		{
		case(1) :
		{
			printf("\nYou have selected 'Capacitor Voltage'\n");
			capVolt();

			menuOption = 0;
			break;
		}

		case(2) :
		{
			printf("\nYou have selected 'Capacitor Current'\n");
			capCurrent();

			menuOption = 0;
			break;
		}

		case(0) :
		{
			printf("\nYou have selected 'Restart Menu'\n");

			break;
		}

		default :
		{
			printf("\nYou have selected 'Exit'.\nGoodbye\n");

			exit = 1;
			break;
		}
		}
	} while (exit == 0);

	printf("\nPress any key to continue...\n");
	getch();

	return 0;

}