// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main(){

	int i = { 0 }, j = { 0 }, n = { 0 };
	cout << "Enter some integers please (enter 0 to quit): " << endl;
	cin >> n;

	while (n != 0) {
		if (n > 0)	i++;
		if (n < 0)	j++;
		cin >> n;
	}

	cout << "positive integers: " << i << endl;
	cout << "negative integers: " << j << endl;

	system("pause");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file