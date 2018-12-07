#pragma once

#define PI 3.14159265359

#include <iostream>

using namespace std;

class complex
{
	double real;
	double imag;
	double radius;
	double argument;

public:
	complex(double Real = 0, double Imag = 0, double Radius = 0, double Argument = 0);
	void calculatePolar();
	void calculateComplex();

	void setReal(double r);
	void setImag(double i);
	void setRadius(double r);
	void setArgument(double a);
	double getReal() const;
	double getImag() const;
	double getRadius() const;
	double getArgument() const;

	complex operator+ (const complex& c);
	complex operator- (const complex& c);
	complex operator* (const complex& c);
	complex operator/ (const complex& c);

	~complex();
};

