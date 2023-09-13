#pragma once


#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265359
#define G 6.67 * pow(10, - 11)
#define i 73
#define j 12


#include<stdio.h>
#include<math.h>

double GetData(char* query, char* equation); //Wrote a function to prompt for input.
int GetDataInt(char* query, char* equation); //prompts for input and outputs an integer.
double calculate_newtons_2nd_law(double mass, double acceleration);
double calculate_volume_cylander(double radius, double height);
char perform_character_encoding(char c);
double calculate_graviational_force(double mass1, double mass2, double distance);
double calculate_voltage_out(double r1, double r2, double Vin);
double distance_between_points(double x1, double x2, double y1, double y2);
double calculate_general_equation(double x, double z, int a, float floatI, float floatJ);

