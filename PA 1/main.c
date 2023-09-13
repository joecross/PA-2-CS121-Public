/*
	Name: Joe Cross
	Class: CPT_S 121
	Date: 9-6-23
	Decription: take inputs, and calculate requested equations.
*/



#include "PA2.h"




int	main(void)
{
	double mass = 0.0, acceleration = 0.0, radius = 0.0, height = 0.0, force = 0.0,
		mass1 = 0.0, mass2 = 0.0, distance = 0.0, VoltageOut = 0.0, r1 = 0.0, r2 = 0.0,
		VoltageIn = 0.0, x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, z = 0.0, volume = 0.0;
	int a = 0, i=0, j=0;
	char EncodingChar ='\0';
	float floati = 0, floatj = 0;
	
	//	Newton’s Second Law of Motion : force = mass * acceleration
	mass = Asking("mass","Newton's Second Law (F=MA)");
	acceleration = Asking("acceleration","Newton's Second Law");
	force = MyMultiply(mass, acceleration, 1);
	printf("f=ma %g * %g = Force = %.2lf\n\n",mass,acceleration, force);
	 
	//	Volume of a cylinder : volume_cylinder = PI * radius2 * height
	radius = Asking("radius","volume of a cylander");
	height = Asking("cylander height", "volume of a cylander");
	volume = PI * pow(radius, 2) * height;
	printf("Volume of cylander = %g * %g^2 * %g = %lf\n\n", PI, radius, height ,volume);
	//	Character encoding : encoded_character = (plaintext_character - 'a') + 'A' (note :
	//		what happens if plaintext_character is lowercase ? )
	printf("Input a single alphabetical character to capitalize:");
	scanf(" %c", &EncodingChar);
	EncodingChar = (EncodingChar - 'a') + 'A';
	printf("Encoded character = %c\n\n",EncodingChar); //Works!!!

	//	4. Gravity : force = G * mass1 * mass2 / distance2, where G is the gravitational
	//	constant with value 6.67 * 10 - 11
	mass1 = Asking("mass 1", "calculating gravitational force");
	mass2 = Asking("mass 2", "calculating gravitational force");
	distance = Asking("distance apart", "calculating gravitational force");
	force = (G * mass1 * mass2) / pow(distance, 2); //Works!!
	printf("Gravitational force = (%g * %g * %g)/%g^2 =%g\n\n", G , mass1 , mass2 , distance ,force); 
	 
	//	5. Resistive divider : vout = r2 / (r1 + r2) * vin
	r1 = Asking("resistor one", "calculating voltage");
	r2 = Asking("resistor two", "calculating voltage");
	VoltageIn = Asking("voltage in", "calculating voltage out");
	VoltageOut = r2 / (r1 + r2) * VoltageIn;
	printf("Voltage Out = %g / (%g + %g) * %g = %g\n\n", r2, r1, r2, VoltageIn, VoltageOut);

	//	6. Distance between two points : distance = square root of((x1 - x2)2 + (y1 - y2)2)
	//	(note : you will need to use sqrt() out of <math.h>)
	x1 = Asking("X coordinate 1", "calculating distance");
	x2 = Asking("X coordinate 2", "calculating distance");
	y1 = Asking("Y coordinate 1", "calculating distance");
	y2 = Asking("Y coordinate 2", "calculating distance");
	distance = sqrt((pow((x1-x2),2)+pow((y1-y2),2)));
	printf("Distance between (%g,%g) and (%g,%g) = %g\n\n",x1,y1,x2,y2,distance);
	 
	//	7. General equation : y = (73 / 12) - x * z + a / (a % 2) (recall : a is an integer; the
	//	73 and 12 constants in the equation should be left as integers initially, but
	//	explicitly type - casted as floating - point values)
	i = 73;
	j = 12;
	x1 = Asking("X", "the general equation");
	z = Asking("Z", "the general equation");
	a = AskingInt("a", "the general equation");

	floati = (float)i;
	floatj = (float)j;
	//printf("%d", 3 % 2);
	y1 = (floati / floatj) - (x1 * z) + (a / (a % 2));
	printf("(%g/%g)-(%g*%g)+(%d/(%d mod 2)) = %g",floati,floatj,x1,z,a,a ,y1);
}


//Requiring 3 inputs to allow for all versions of multiplication required in the assignment.
//If I don't need one of the inputs, I will just input 1.
double MyMultiply (double num1, double num2, double num3)
{
	return num1 * num2 * num3;
}

//Function is to request an input from user for the main function.
//Query is simply the variable you're looking for. 
//Equation is a description of what you will use it for.
