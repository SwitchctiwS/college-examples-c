/*
Name: Jared Thibault
Date: 31 March 2015

Program Description:
*/

#include "main.h"

int main(void) {
	float arraySize, *ptrFloat = NULL;
	int i;

	printf("What is the size of he array?\n");
	fflush(stdin);
	scanf_s("%f", &arraySize);

	ptrFloat = (float *)malloc(arraySize * sizeof(float));

	if (ptrFloat != NULL) {
		for (i = 0; i < arraySize; i++) {
			ptrFloat[i] = -1.0;
			printf("\n%f", ptrFloat[i]);
		}

		free(ptrFloat);
	} else {
        printf("\nAn error was encountered\n");
    }

	printf("\nPress any key to exit...");
	_getch();


	return 0;
}
