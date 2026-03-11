#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
private:
	int _re;
	int _im;
	

public:
	//constructors
	Complex() ;
	Complex(int re, int im);
	Complex(const Complex& r);

	//getters & setters
	int getRe() const;
	int getIm() const;
	void setRe(int re);
	void setIm(int im);
	void setComplex(int re, int im);

	// Absolute value and phase functions
	double abValue ();
	double phase ();

	//add,sub,print functions
	Complex add(Complex r);
	Complex sub(Complex r);
	void print();
};

