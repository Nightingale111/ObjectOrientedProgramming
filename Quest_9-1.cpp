// Quest_9-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double equation(double answer, double m) {  // works
    if (answer == 0) {
        return 1;
    }
    if (answer == 1) {
        return m;
    }
    else {
        return (0.25 * equation((answer - 1),m)) + 1;
    }
}

int main()
{
    int n;
    double m;

    cout << "Please input the number of values you would like to generate: ";
    cin >> n;
    cout << "Please input the starting value: ";
    cin >> m;
    
    cout << "\nYour recursive sequence: \n";
    for (int counter = 1; counter <= n; counter++) {
        cout << "\n" << equation(counter, m);
    }
}


