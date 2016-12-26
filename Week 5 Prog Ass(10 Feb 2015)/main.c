/*
Name: Jared Thibault
Date 10 Feb 2015

Program description: Finds the sum of all even numbers between 1 and 1000 (includeing 1000).
*/

#include "main.h"

int main(void)
{
	int num = 0, sum = 0, count;

	for (count = 2; count <= 1000; count = count + 2)
	{
		num = num + 2;
		sum = sum + num;
	}

	printf("%d", sum);
	_getch();

	return 0;
}