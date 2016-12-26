/*
Names: Jared Thibault, Zachary Gosden
Date: 12 Feb 2015

Program Description: Takes a numeric capacitor code and tells the user what range it's in.
*/

#include "main.h"

int main(void)
{
	int cap = -1, LD = -1;

	printf("Please enter a three-digit numeric capacitor code.\n(The last digit's value cannot exceed 4):\n");

	do
	{
		fflush(stdin);
		scanf_s("%d", &cap);
		
		if ((cap <= 99) || (cap > 994))
		{
			if (cap <=99 ) printf("\nAn incorrect number was entered.\n");
			if (cap > 994 ) printf("\nThe number is out of range.\n");
		}
		else LD = cap % 10;

	} while ((LD < 0) || (LD > 4));

	if ((LD >= 0) && (LD <= 1)) printf("\nThe capacitor is in the picoFarad range.\n");
	if ((LD > 1) && (LD <= 4)) printf("\nThe capacitor is in the nanoFarad range.\n");

	printf("\nPress any key to exit...");
	_getch();

	return 0;
}