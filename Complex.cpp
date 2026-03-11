#include "Complex.h"
#include <corecrt_math_defines.h>

Complex::Complex()
{
	this -> _im = 0;
	this -> _re = 0;
}

Complex::Complex(int re, int im)
{
	this ->_re = re;
	this ->_im = im;
}

Complex::Complex(const Complex& r)
{
	this-> _im = r.getIm();
	this->_re = r.getRe();
}


int Complex::getRe() const
{
	return this->_re;
}

int Complex::getIm() const
{
	return this->_im;
}

void Complex::setRe(int re)
{
	this->_re = re;
}

void Complex::setIm(int im)
{
	this->_im = im;
}

void Complex::setComplex(int re,int im)
{
	this->_re = re;
	this->_im = im;
}

double Complex::abValue()
{
	double ab = sqrt(pow(getRe(), 2) + pow(getIm(), 2));
	return ab;
}

double Complex::phase()
{
	double phs = atan2(getIm(), getRe()) * (180 / M_PI);
	return phs;
}

Complex Complex::add(Complex r)
{
	Complex sum(getRe() + r.getRe(), getIm() + r.getIm());
	return sum;
}

Complex Complex::sub(Complex r)
{
	Complex sub(getRe() - r.getRe(), getIm() - r.getIm());
	return sub;
}

void Complex::print()
{
	//for positive or negative re and positive im parts
	if (this ->_re != 0 && this->_im > 0)
	{
	cout << getRe() << " + " << getIm() << "i ";
	cout << "(r = " << abValue() << ",theta = " << phase()<< ")"<< endl;
	}
	//for 0 re and positive or negative im parts
	else if (this->_re == 0 && this->_im != 0)
	{
		cout << getIm() << "i ";
		cout << "(r = " << abValue() << ",theta = " << phase() << ")" << endl;
	}
	//for positive or negative re and negative im parts
	else if (this->_re != 0 && this->_im < 0)
	{
		cout << getRe() << " " << getIm() << "i ";
		cout << "(r = " << abValue() << ",theta = " << phase() << ")" << endl;
	}
	//for positive or negative re and 0 im parts
	else if (this->_re != 0 && this->_im == 0)
	{
		cout << getRe();
		cout << "(r = " << abValue() << ",theta = " << phase() << ")" << endl;
	}
	//for 0 re and 0 im parts
	else if (this->_re == 0 && this->_im == 0)
	{
		cout << getRe();
		cout << " (r = " << abValue() << ",theta = " << phase() << ")" << endl;
	}

}

