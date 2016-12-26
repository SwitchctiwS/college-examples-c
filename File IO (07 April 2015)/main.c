/*
Name: Jared Thibault
Date: 7 April 2015

Program Description: This program does stuff
*/

#include "main.h"

int main(void)
{
	int File = FALSE, Error;
	char Message[21];
	FILE *ptrFile = NULL;

	printf("What is your message (20 characters or fewer)?\n");
	fflush(stdin);
	gets_s(Message, 21);

	do
	{
		ptrFile = fopen("MyFile.txt", "r");
		if (ptrFile == NULL) ptrFile = fopen("MyFile.txt", "w");
		else File = TRUE;
	} while (File == FALSE);

	if (ptrFile != NULL)
	{
		Error = fseek(ptrFile, 0L, SEEK_SET);
		if (!Error)
		{
			Error = FALSE;
			Error = fwrite(Message, sizeof(char), strlen(Message) + 1, ptrFile);
			if (Error != strlen(Message) + 1) printf("\nFile I/O error.");
			fclose(ptrFile);
		}
		else printf("\nFile I/O error.");
	}
	else printf("\nFile I/O error.");

	printf("\n\nPress any key to exit...");
	_getch();
	return 0;
}