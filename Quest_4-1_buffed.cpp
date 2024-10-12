// Quest 4-1 buffed: Done and done

#include <cmath>
#include <iostream>
using namespace std;

/*----------------------------------------------------------------------------
Function name: hypoteneuse
Parameters: double length1, double length2
Return type: double 
Description: hypotenuse() takes as input two side lengths of a triangle and 
uses the Pythagorean theorem to calculate the hypotenuse of the triangle and
output its length to the user as well as return the hypotenuse length value
----------------------------------------------------------------------------*/

double hypotenuse(double length1, double length2) {
	double c;
	c = sqrt((length1 * length1) + (length2 * length2));
	cout << "\nThe hypotenuse length is " << c;
	return c;
}

int main()
{
	double side1;
	double side2;
	double answer;
	int i = 1;

	while (i != 2) {
		cout << "Please enter the length of the first side: ";
		cin >> side1;
		cout << "\nPlease enter the length of the second side: ";
		cin >> side2;

		hypotenuse(side1, side2);

		cout << "\n\nIf you would like to run the calculation again, press 1,";
		cout << "\nIf you would like to exit the program, press 2: ";
		cin >> i;
		if (i == 2) {
			break;
		}
	}
	
	return 0;
}
