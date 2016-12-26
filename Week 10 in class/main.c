/*
Name: Jared Thibault
Date: 24 Mar 2015

Program Description:
*/

#include "main.h"

int main(void)
{
	int i;
	char name[20], c;

	fflush(stdin);
	gets_s(name, 20);

	for (i = 0; i <= strlen(name); i++)
	{
		if (islower(name[i])) name[i] = toupper(name[i]);
		else name[i] = tolower(name[i]);
	}

	puts(name);

	printf("Press any key to exit...");
	getch();

	return 0;
}