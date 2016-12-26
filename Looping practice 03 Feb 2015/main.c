/*
Name: Jared Thibault
Date: 12 Feb 2015

Program Description: This program exits once the user enters a value inbetween the given values.
*/

#include "main.h"

// Question 1
int main(void)
{
	int num, check = 0;

	printf("Please enter an integer between -1 and +90:\n");

	do
	{
		fflush(stdin);
		check = scanf_s("%d", &num);
		if ((check == 0) || (num < -1) || (num > 90)) printf("\nThat was not a valid number.\n");
	} while ((check == 0) || (num < -1) || (num > 90));

	printf("\nThat was a correct value. \nPress any key to exit.");
	_getch();

	return 0;
}