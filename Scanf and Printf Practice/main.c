/*
Name: Jared Thibault
Date: 20 Jan 2015

Program Description: diplays user-entered age, height, and wage onto the screen*/

#include "main.h"

int a;
float b, c;

float main(void)
{
	scanf("Please enter your age %d, \nyour height %f, \nand your wage %.2f", &a, &b, &c);
	printf("The age was %d, the height was %f, and the wage was %f", a, b, c);

	return 0;
}