// Quest_5-1.cpp : done
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	unsigned int array[9]; 
	//fill array using user input (use for loop)
	for (int i = 0; i < 9; i++) {   // iterates through the elements of the array
		unsigned int num;
		cout << "Please enter an integer: ";
		cin >> num; 
		array[i] = num;   // assigns user-inputted value to each array element
	}
	
	//find median of nine element array using sort function
	sort(begin(array), end(array));
	cout << "The median of this array is: " << array[4];//output median


	

}

