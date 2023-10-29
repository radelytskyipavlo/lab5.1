// Lab 5_1
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
double h(const double x, const double y); // прототип
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (h(1, s * t) + h(t + s, 1) * h(t + s, 1)) / (1 + h(s, t) * h(s, t) * h(s, t));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // визначення
{
	return (a*a-sin(b)*cos(a)+b*b);
}