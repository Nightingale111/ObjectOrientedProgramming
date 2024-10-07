// UltraQuest_4-1.cpp : 

#include <iostream>
using namespace std;

int euclidGCD(int num1,int num2) {
    int GCD;
    int remainder;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "\nEnter the second number: ";
    cin >> num2;

    do {
        remainder = num2/num1;
        num1 = num2;
        num2 = remainder;
    } while (remainder > 0);

    return GCD;
}

int main()
{
    for (int num1 = 1; num1 <= 100; num1++) {
        for (int num2 = 1; num2 <= 100; num2++) {
            int GCD = euclidGCD(num1,num2);
            cout << "The GCD of " << num1 << " and " << num2 << " is " << GCD;
        }
    }
    
}

