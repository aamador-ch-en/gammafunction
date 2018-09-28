//GammaFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Gamma function is the generalization of the factorial function, it works for integers and real numbers.

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
/*
Define a factorial or gamma function class, it gets the n number that belongs to the real set of numbers 
the Factorial OR GAMma (forgam) class takes the object and defines its factorial, regardless if it is an integer or a real 
it always treats the number as a real, forgam treats real declared integers in the same way a normal factorial would be calculated
when the number is real it treats it as real and uses gamma function straight up.
*/
double pie(double x) {
	double y;
	forgam z;
	y = 4 * pow(z.gamma(x,0.0000001), 2);
	return y;
}
int main()
{
	double n;
	forgam fact;
	printf("Introduce number\n");
	cin >> n;
	double ki = 0.000001; //define a k value make smaller for more exact values
	if (fact.natre(n) == 0) { //Call logical function 0 it is real 1 it is natural
		printf("The factorial of %g is %g\n", n, fact.gamma(n, ki)); //Real case
	}
	else {
		printf("The factorial of %g is %g\n", n, fact.factorial(n)); //Natural case
	}
/*Just because I want to make this more usable, by definition 0.5!=sqrt(pi)/2 so we check how 
close we are to the real value of pi, we have a small function called pie on top of main just to make the test*/
	printf("This is a test for the integral\n");
	printf("Calculated pi\n %.49g\n", pie(0.5));
	double pi = 3.141592653589793238462643383279502884197169399375;
	printf("First digits of pi\n %.60g\n", pi);
	return 0;
}
