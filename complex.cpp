#include "complex.h"



complex::complex(double Real, double Imag, double Radius, double Argument)
{
	if (Radius == 0 && Argument == 0 && (Real != 0 || Imag != 0)) {
		setReal(Real);
		setImag(Imag);
		calculatePolar();
	}
	else if (Real == 0 && Imag == 0 && (Radius != 0 || Argument != 0)) {
		setRadius(Radius);
		setArgument(Argument);
		calculateComplex();
	}
	else {
		real = Real;
		imag = Imag;
		radius = Radius;
		argument = Argument;
	}
}

void complex::calculatePolar()
{
	radius = sqrt(pow(real, 2) + pow(imag, 2));
	if (real != 0)
		argument = atan(imag / real);
	else if (imag > 0)
		argument = 90;
	else
		argument = -90;
}

void complex::calculateComplex()
{
	real = radius * cos(argument *  PI / 180.0);
	imag = radius * sin(argument *  PI / 180.0);
}

void complex::setReal(double r)
{
	real = r;
}

void complex::setImag(double i)
{
	imag = i;
}

void complex::setRadius(double r)
{
	radius = r;
}

void complex::setArgument(double a)
{
	argument = a;
}

double complex::getReal() const
{
	return real;
}

double complex::getImag() const
{
	return imag;
}

double complex::getRadius() const
{
	return radius;
}

double complex::getArgument() const
{
	return argument;
}

complex complex::operator+(const complex & c)
{
	return complex(this->real + c.real, this->imag + c.imag);
}

complex complex::operator-(const complex & c)
{
	return complex(this->real - c.real, this->imag - c.imag);
}

complex complex::operator*(const complex & c)
{
	double newReal = (this->real * c.real) - (this->imag * c.imag);
	double newImag = (this->real * c.imag) + (this->imag * c.real);

	return complex(newReal, newImag);
}

complex complex::operator/(const complex & c)
{
	double newRadius = this->radius / c.radius;
	double newArgument = this->argument - c.argument;

	return complex(0, 0, newRadius, newArgument);
}

complex::~complex()
{
}
