#pragma once


#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265359
#define G 6.67 * pow(10, - 11)


#include<stdio.h>
#include<math.h>

double MyMultiply(double num1, double num2, double num3);
double GetData(char* query, char* equation); //Wrote a function to prompt for input.
int GetDataInt(char* query, char* equation); //prompts for input and outputs an integer.
