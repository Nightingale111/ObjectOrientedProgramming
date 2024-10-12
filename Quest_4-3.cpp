// Quest_4-3.cpp : done

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;

	x = fabs(7.5);
	cout << "fabs(7.5) = " << x;
	x = floor(7.5);
	cout << "\nfloor(7.5) = " << x;
	x = fabs(0.0);
	cout << "\nfabs(0.0) = " << x;
	x = ceil(0.0);
	cout << "\nceil(0.0) = " << x;
	x = fabs(-6.4);
	cout << "\nfabs(-6.4) = " << x;
	x = ceil(-6.4);
	cout << "\nceil(-6.4) = " << x;
	x = ceil(-fabs(-8 + floor(-5.5)));
	cout << "\nceil(-fabs(-8+floor(-5.5))) = " << x << "\n";

	// three additional cmath library functions

	cout << "\nBehold, some cool math functions!";
	x = exp2(10.0);
	cout << "\nexp2(10.0) = " << x;
	x = erf(3575.6);
	cout << "\nerf(3575.6) = " << x;
	x = lgamma(967.1);
	cout << "\nlgamma(967.1) = " << x << "\n\n";

	return 0;
}

