/*
Name: Jared Thibault
Date: 12 Mar 2015

Program Description: This program creates random numbers according to the user's input.
*/

#include "main.h"

void Looper(int loopcnt)
{
	int counter;

	printf("\nYour random numbers are:\n");

	for (counter = 0; counter < loopcnt; counter++)
	{
		int rnum = rand() % 10 + 1;
		printf("%d\n", rnum);
	}

	printf("Press any key to exit.");
	getch();
}

int main(void)
{
	int Num;
	srand(time(NULL));

	printf("Please enter an integer number\n");

	fflush(stdin);
	scanf_s("%d", &Num);

	Looper(Num);

	return 0;
}