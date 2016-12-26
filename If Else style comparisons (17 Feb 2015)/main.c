#include "main.h"

int main(void)
{
	const char LockNumber1 = '1', LockNumber2 = '2', LockNumber3 = '3', LockNumber4 = '4';
	char GetNumber1, GetNumber2, GetNumber3, GetNumber4;

	printf("Please enter first lock number:\n");
	GetNumber1 = getch();

	printf("Please enter second lock number:\n");
	GetNumber2 = getch();

	printf("third number:\n");
	GetNumber3 = getch();

	printf("fourth numer:\n");
	GetNumber4 = getch();

	if ((LockNumber1 == GetNumber1) && (LockNumber2 == GetNumber2) && (LockNumber3 == GetNumber3) && (LockNumber4 == GetNumber4))
	{
		printf("\nThe door has been unlocked");
	}
	else printf("\nThe police have been summoned");

	getch();
	return 0;
}