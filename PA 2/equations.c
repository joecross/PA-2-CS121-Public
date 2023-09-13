#include "equations.h"

double GetData(char* query, char* equation)
{
	double output;
	printf("Enter a value for %s for use in %s:", query, equation);
	scanf(" %lf", &output);
	return output;
}

int GetDataInt(char* query, char* equation)
{
	int output;
	printf("Enter a value for %s for use in %s:", query, equation);
	scanf(" %d", &output);
	return output;
}



double calculate_newtons_2nd_law (double mass, double acceleration)
{
	double force = 0.0;
	force = mass * acceleration;
	return force;
}

double calculate_volume_cylander(double radius, double height)
{
	double volume = 0.0;
	volume = PI * pow(radius, 2) * height;
	return volume;
}

char perform_character_encoding(char c)
{
	c = (c - 'a') + 'A';
	return c;
}

double calculate_graviational_force(double mass1, double mass2, double distance)
{
	double F = 0.0;
	F = (G * mass1 * mass2) / pow(distance, 2);
	return F;
}

double calculate_voltage_out(double r1, double r2, double Vin)
{
	double Vout = 0.0;
	Vout = r2 / (r1 + r2) * Vin;
	return Vout;
}

double distance_between_points(double x1, double x2, double y1, double y2)
{
	double distance = 0.0;
	distance = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)));
	return distance;
}

double calculate_general_equation(double x, double z, int a, float floatI, float floatJ)
{
	double general = 0.0;
	general = (floatI / floatJ) - (x * z) + (a / (a % 2));
	return general;
}