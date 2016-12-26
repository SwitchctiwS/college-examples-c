/*
Name: Jared Thibault
Date 29 Jan 2015

Program description: Displays the real and imaginary parts of a user-entered phasor
*/

#include "main.h"

int main(void)
{
	float amp, deg, rad, rms, real, imag;

	printf("Amplitude of phasor in volts: \n");
	fflush(stdin);
	scanf_s("%f", &amp);

	printf("\nAngle of phasor in degrees: \n");
	fflush(stdin);
	scanf_s("%f", &deg);

	rad = (deg*pi) / 180.0;
	rms = amp / sqrt(2.0);
	real = rms*cosf(rad);
	imag = rms*sinf(rad);

	printf("\nThe real part of the phasor was %.2f while the imaginary part was %.2f.\n", real, imag);
	printf("\nPress any key to exit.");

	getch();

	return 0;
}