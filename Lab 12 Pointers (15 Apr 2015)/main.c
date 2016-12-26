/*
Name: Jared Thibault
Date: 16 April 2015

Program Description:
*/

#include "main.h"

float *pTemp = NULL;

void calAvgTemp(int arraySize, float *pAvgTemp) {
	int i;
	float  sumTemp = 0, test;

	for (i = 0; i < arraySize; i++) {
        sumTemp += pTemp[i];
    }

	*pAvgTemp = sumTemp / (float)arraySize;
}

void fileTemp(float avgTemp, int arraySize) {
	int file = FALSE, error = NULL;
	char fileName[21];
	FILE *pFileTemp = NULL;

	printf("\nWhat is the file name (under 20 characters)?\n");
	fflush(stdin);
	gets_s(fileName, 21);

	pFileTemp = fopen(fileName, "w");

	if (pFileTemp != NULL) {
		error = fseek(pFileTemp, 0L, SEEK_SET);

        if (!error) {
			error = FALSE;
			error = fwrite(pTemp, sizeof(float), arraySize, pFileTemp);

            if (error != arraySize) {
                printf("\nFile I/O error.");
            }

		} else {
            printf("\nFile I/O error.");
        }

	} else {
        printf("\nFile I/O error.");
    }

	fclose(pFileTemp);
}

int negTemp (int arraySize) {
	int i, flag = FALSE;

	for (i = 0; i < arraySize; i++) {
        if (pTemp[i] < 0) {
            flag = TRUE;
        }
    }

	return flag;
}

int main(void) {
	int arraySize, i, flag;
	char stringTemp[11];
	float avgTemp,test;

	printf("How many temperatures are there?\n");
	fflush(stdin);
	scanf_s("%d", &arraySize);

	pTemp = (float *)malloc(arraySize*sizeof(float));

	if (pTemp != NULL) {
		printf("\nNote: each number must be 10 characters of fewer.");

		for (i = 0; i < arraySize; i++) {
			printf("\nWhat is temperature value %d?\n", (i + 1));
			fflush(stdin);
			gets_s(stringTemp, 11);
			pTemp[i] = (float)atof(stringTemp);
		}

		calAvgTemp(arraySize, &avgTemp);

		flag = negTemp(arraySize);

		fileTemp(avgTemp, arraySize);

		if (flag == TRUE) {
            printf("\nThe average temperature is %.2f and there are negative numbers.", avgTemp);
        } else {
            printf("\nThe average temperature is %.2f and there are no negative numbers.", avgTemp);
        }

	} else {
        printf("\nThere was an error.");
    }

	printf("\nPress any key to exit...");
	getch();

	free(pTemp);

	return 0;
}
