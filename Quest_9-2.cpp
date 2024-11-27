// Quest_9-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double sigmaNot(double answer) {  // works
    if (answer == 0) {
        return 1;
    }
    else {
        return pow(2, answer) + sigmaNot(answer - 1);
    }
}

int main()
{
    int n;

    cout << "Please input an integer n for the summation notation: ";
    cin >> n;

    cout << "\nYour sum: ";
    cout << sigmaNot(n);
}

