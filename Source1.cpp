#include <iostream>
#include "Header.h"
using namespace std;
void triangle::init(double a, double b)
{
	ba = a;
	he = b;
}

double triangle::calculatearea(double e, double f)
{
	
	double g = (e*f)*1/2;
	return g;
}

void triangle::display(double c, double d)
{
	ba = c;
	he = d;

	cout << "Height of the triangle is :" << ba << endl;
	cout << "Base of the triangle is :" << he << endl;
	

}
