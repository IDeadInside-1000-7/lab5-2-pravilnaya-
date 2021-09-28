#include <stdio.h>
#include <math.h>
void main()
{
	float A, B, C, AC, BC, summa;
	A = 3; 
	B = 9;
	C = 15;
	AC = (C - A);
	printf("AC = ");
	printf("%f\n", AC);
	BC = (C - B);
	printf("BC = ");
	printf("%f\n", BC);
	summa = (AC + BC);
	printf("Summa AB i AC = ");
	printf("%f\n", summa);
}