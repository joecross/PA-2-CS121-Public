#include "PA2.h"

double GetData(char* query, char* equation)
{
	double output;
	printf("Enter a value for %s for use in %s:", query, equation);
	scanf(" %lf", &output);
	printf("\n");
	return output;
}

int GetDataInt(char* query, char* equation)
{
	int output;
	printf("Enter a value for %s for use in %s:", query, equation);
	scanf(" %d", &output);
	printf("\n");
	return output;
}