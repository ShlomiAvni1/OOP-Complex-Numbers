#pragma once
#include "Complex.h"

void main()
{
	//constructors usage
	Complex z1;
	Complex z2(7, -7);
	Complex z3(3, 4);
	Complex z2c(z2);
	Complex z4(0, 9);
	Complex z5(-2, 0);

	//// Absolute value,print and phase functions implementation
	cout << "All the complex numbers,their absolute values and phases:" << endl;
	cout << "z1. ";
	z1.print();
	cout << "z2. ";
	z2.print();
	cout << "z2 copy.  ";
	z2c.print();
	cout << "z3. ";
	z3.print();
	cout << "z4. ";
	z4.print();
	cout << "z5. ";
	z5.print();

	//Just making space
	cout << endl << endl;

	//add function implementation
	Complex z6 = z2.add(z3);
	cout << "The complex result of the addition of z2 and z3 will be:" << endl;
	z6.print();
	Complex z7 = z4.add(z5);
	cout << "The complex result of the addition of z4 and z5 will be:" << endl;
	z7.print();

	//Just making space
	cout << endl << endl;

	//sub function implementation 
	z6 = z2.sub(z3);
	cout << "The complex result of the subtraction of z3 from z2 will be:" << endl;
	z6.print();
	z7 = z4.sub(z5);
	cout << "The complex result of the subtraction of z5 from z4 will be:" << endl;
	z7.print();

	//Just making space
	cout << endl << endl;

	//setters functions implementation
	cout << "Setting the z1 values to be 5 + 5i: " << endl;
	z1.setComplex(5,5);
	z1.print();
	cout << "Setting the z1 real value to be 16: " << endl;
	z1.setRe(16);
	z1.print();
	cout << "Setting the z1 imaginary value to be 8: " << endl;
	z1.setIm(8);
	z1.print();

}