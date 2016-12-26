/*
Name: Jared Thibault
Date: 20 Feb 2015

Program Description: This program creates a random numher/character and has the user try to guess it.
*/

#include "main.h"

//Random Numbers
int RnNum(void)
{
	srand(time(NULL));
	int rnum = rand() % 150, guess, exit;

	printf("Enter a number between 1 and 150.\n\nIf you wish to exit, enter any letter.\n");

	do
	{
		fflush(stdin);
		exit = scanf("%d", &guess);

		if ((guess > rnum) && (guess <= 150) && (exit == 1)) printf("\nYou guessed too high.\n");
		if ((guess < rnum) && (guess >= 1) && (exit == 1)) printf("\nYou guessed too low.\n");
		if (((guess < 1) || (guess > 150)) && (exit == 1)) printf("\nThat is not a valid input.\n");

	} while ((rnum != guess) && (exit == 1));

	if (guess == rnum) printf("\n\nYou guessed correctly.");
	else printf("\nGoodbye.");

	printf("\nPress any key to exit.");
	getch();

	return 0;
}


//Random Characters
int RnChar(void)
{
	srand(time(NULL));
	char rchar = 'a' + (rand() % 26), guess;
	int exit = FALSE;

	printf("Enter a letter between 'a' and 'z'.\n\nEnter any other character to exit.\n");

	do
	{
		fflush(stdin);
		scanf("%c", &guess);

		if ((guess < 'a') || (guess > 'z')) exit = TRUE;
		if ((guess > rchar) && (exit == FALSE)) printf("\nYou guessed too high.\n");
		if ((guess < rchar) && (exit == FALSE)) printf("\nYou guessed too low.\n");

	} while ((rchar != guess) && (exit == FALSE));

	if (guess == rchar) printf("\n\nYou guessed correctly.");
	else printf("\nGoodbye.");

	printf("\nPress any key to exit.");
	getch();

	return 0;
}

int main(int argc, char const *argv[]) {
    RnChar();
    RnNum();

    return 0;
}
