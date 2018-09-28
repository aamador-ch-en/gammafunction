// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
#include <cmath>
#include <iostream>
int forgam::natre(double z) {
	if (z == (int)z) { return 1; }//1 it is natural 0 it is real 
	else { return 0; }
}
double forgam::fx(double x, double z)
{
	double f;
	f = pow(log(1 / x), z); //Derivative of gamma function Gamma(n)=(n+1)! so we use Gamma(z-1) to calculate z! (zfact)
	return f;
}
double forgam::gamma(double zed, double k) {
	double integ; //Area under the curve
	double zfact;
	integ = 0;//Initialize the value
	zfact = 0;
	for (double i = 1; i < 1 / k; ++i) { //Integration from 0 to 1 using the rectangle method
		integ = fx(i*k, zed)*k; //Integrate gamma function 
		zfact = zfact + integ;	//Sum of small areas; output 
		//printf("iteration %f\n", i);
	}
	return zfact;
}
double forgam::factorial(double zed) {
	double zfact;
	zfact = 1;
	for (double i = 1; i < zed+1; ++i) {
		zfact = zfact * i;
	}
	return zfact;
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.

