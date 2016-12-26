/*
Name: Jared Thibault
Date: 22 Jan 2015

Program Description: Adds and displays two user-inputted floating-point numbers
*/

#include "main.h"

int main(void)
{
	float x, y, a;

	printf("Please enter the first number you wish to add: ");
	fflush(stdin);
	scanf_s("%f", &x);

	printf("\nPlease enter the second number you wish to add: ");
	fflush(stdin);
	scanf_s("%f", &y);

	a = x + y;

	printf("\nThe sum of the two numbers is... \nTwo decimal places: %.2f \nZero decimal places: %+.0f", a, a);

	printf("\nPress any key to exit.");
	getch();

	return 0;
}