#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void actobc(int year)
{
	if (year == 0 || year > 0)
	{
		printf("BE : %d", year + 543);
	}
	else {
		printf("Please insert number that is greater or equal zero.");
	}
}


int main()
{
	int year;
	printf("Enter AD : ");
	scanf_s("%d", &year);
	actobc(year);
	return 0;
}
