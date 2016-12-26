/*
Names: Jared Thibault, Zachary Gosden
Date: 2 April 2015

Program Description: Analyzises string and converts dependeding on contents of string.
*/

#include "main.h"

int main(void)
{
	int d = FALSE, i = FALSE, s = FALSE;
	char strg[20];

	printf("Please enter under 20 characters\n");
	fflush(stdin);
	gets_s(strg, 20);

	for (i = 0; i <= strlen(strg); i++)
	{
		if (isspace(strg[i])) s = TRUE;
		if (isdigit(strg[i])) d = TRUE;
	}

	if ((s == FALSE) && (d == FALSE)) for (i = 0; i <= strlen(strg); i++) strg[i] = toupper(strg[i]);
	if ((s == FALSE) && (d == TRUE)) for (i = 0; i <= strlen(strg); i++) if (isdigit(strg[i])) strg[i] = '*';
	if ((s == TRUE) && (d == FALSE)) for (i = 0; i <= strlen(strg); i++) strg[i] = tolower(strg[i]);

	puts(strg);

	printf("\nPress any key to exit...");
	getch();
	return 0;
}