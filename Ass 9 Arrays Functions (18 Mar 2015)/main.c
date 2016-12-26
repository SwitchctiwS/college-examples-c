/*
Name: Jared Thibault, Zachary Gosden
Date: 23 Mar 2015

Program Descrption: Collects the heights of every person in a room (up to 100) and calulates different values from the heights.
*/

#include "main.h"

void oneFourHeight(int height1, int height4, int roomCount)
{
	printf("\nThe first person's height is %d inches.", height1);
	if (roomCount >= 4) printf("\nThe fourth person's height is %d inches.", height4);
}

void calAvgHeight(int sumHeight, int roomCount, int flag)
{
	float avg;

	avg = (float)sumHeight / (float)roomCount;

	if(flag == 1) printf("\nThe average height of every other person is %.2f inches.", avg);
	if(flag == 0) printf("\nThe average height of every person is %.2f inches.", avg);
}


int main(void)
{
	int roomCount, i, height[100], 
		sumHeight = 0, otherSumHeight = 0, otherRoomCount = 0, flag,
		highHeight, lowHeight;

	printf("How many people are in the room (up to 100)?\n");
	fflush(stdin);
	scanf("%d", &roomCount);

	if (roomCount == 0)
	{
		printf("\nThere are no people in the room, so no calculations can be done.\nPress any key to exit...");
		getch();


		return 0;
	}

	else
	{
		for (i = 0; i < roomCount; i++)
		{
			printf("\nPerson %d, please enter your height in inches (no decimals):\n", (i + 1));
			fflush(stdin);
			scanf("%d", &height[i]);

			sumHeight += height[i];

			if (i % 2 == 1)
			{
				otherSumHeight += height[i];
				otherRoomCount++;
			}

			if (i > 0)
			{
				if ((height[i] > height[i - 1]) && (height[i] > highHeight)) highHeight = height[i];
				if ((height[i] < height[i - 1]) && (height[i] < lowHeight)) lowHeight = height[i];
			}

			else
			{
				highHeight = height[0];
				lowHeight = height[0];
			}
		}
	}

	oneFourHeight(height[0], height[3], roomCount);

	calAvgHeight(sumHeight, roomCount, flag = 0);

	calAvgHeight(otherSumHeight, otherRoomCount, flag = 1);

	printf("\nThe highest height is %d inches.", highHeight);
	printf("\nThe lowest height is %d inches.", lowHeight);

	printf("\n\nPress any key to exit...");
	getch();


	return 0;

}
