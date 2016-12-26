#include "main.h"

int enterCheck(int passNum)
{
	int check;
	scanf_s("%d", &check);

	if (check == passNum) return 1;
	else return 0;
}

int main(void)
{
	int pass[4] = { 0, 1, 2, 3 }, reset = 0;

	do
	{			//first digit
		if (enterCheck(pass[0]) == 1)
		{
			if (enterCheck(pass[1]) == 1)
			{
				if (enterCheck(pass[2]) == 1)
				{
					if (enterCheck(pass[3]) == 1) reset = 0;
				}
			}
		}

	} while (reset = 1);

	return 0;

}