/*
	Name: Joe Cross
	Class: CPT_S 121
	Date: 9-6-23
	Revised for PA2 on 9-12-23.
	Decription: take inputs, and calculate requested equations.
*/



#include "equations.h"




int	main(void)
{
	double mass = 0.0, acceleration = 0.0, radius = 0.0, height = 0.0, force = 0.0,
		mass1 = 0.0, mass2 = 0.0, distance = 0.0, VoltageOut = 0.0, r1 = 0.0, r2 = 0.0,
		VoltageIn = 0.0, x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, z = 0.0, volume = 0.0;
	int a = 0;
	char EncodingChar ='\0';
	float floati = 0, floatj = 0;
	
	//	Newton’s Second Law of Motion : force = mass * acceleration
	mass = GetData("mass","Newton's Second Law (F=MA)");
	acceleration = GetData("acceleration","Newton's Second Law");
	force = calculate_newtons_2nd_law(mass, acceleration, 1);
	printf("f=ma %.2lf * %.2lf = Force = %.2lf\n\n",mass,acceleration, force);
	 
	//	Volume of a cylinder : volume_cylinder = PI * radius2 * height
	radius = GetData("radius","volume of a cylander");
	height = GetData("cylander height", "volume of a cylander");
	volume = calculate_volume_cylander(radius,height);
	printf("Volume of cylander = %.2lf * %.2lf^2 * %.2lf = %.2lf\n\n", PI, radius, height ,volume);
	
	//	Character encoding : 
	printf("Input a single alphabetical character to capitalize:");
	scanf(" %c", &EncodingChar);
	EncodingChar = perform_character_encoding(EncodingChar);
	printf("Encoded character = %.2lf\n\n",EncodingChar); 

	//	4. Gravity : force = G * mass1 * mass2 / distance2, where G is the gravitational
	//	constant with value 6.67 * 10 - 11
	mass1 = GetData("mass 1", "calculating gravitational force");
	mass2 = GetData("mass 2", "calculating gravitational force");
	distance = GetData("distance apart", "calculating gravitational force");
	force = calculate_graviational_force(mass1, mass2, distance);
	printf("Gravitational force = (%g * %.2lf * %.2lf)/%.2lf^2 =%.2lf\n\n", G , mass1 , mass2 , distance ,force); 
	 
	//	5. Resistive divider : vout = r2 / (r1 + r2) * vin
	r1 = GetData("resistor one", "calculating voltage");
	r2 = GetData("resistor two", "calculating voltage");
	VoltageIn = GetData("voltage in", "calculating voltage out");
	VoltageOut = calculate_voltage_out(r1,r2,VoltageIn);
	printf("Voltage Out = %.2lf / (%.2lf + %.2lf) * %.2lf = %.2lf\n\n", r2, r1, r2, VoltageIn, VoltageOut);

	//	6. Distance between two points : distance = square root of((x1 - x2)2 + (y1 - y2)2)
	x1 = GetData("X coordinate 1", "calculating distance");
	x2 = GetData("X coordinate 2", "calculating distance");
	y1 = GetData("Y coordinate 1", "calculating distance");
	y2 = GetData("Y coordinate 2", "calculating distance");
	distance = distance_between_points(x1, x2, y1, y2);
	printf("Distance between (%.2lf,%.2lf) and (%.2lf,%.2lf) = %.2lf\n\n",x1,y1,x2,y2,distance);
	 
	//	7. General equation : y = (73 / 12) - x * z + a / (a % 2)
	
	x1 = GetData("X", "the general equation");
	z = GetData("Z", "the general equation");
	a = GetDataInt("a", "the general equation");
	floati = (float)i;
	floatj = (float)j;
	y1 = calculate_general_equation(x1, z, a, floati, floatj);
	printf("(%.2lf/%.2lf)-(%.2lf*%.2lf)+(%d/(%d mod 2)) = %.2lf",floati,floatj,x1,z,a,a ,y1);
}

