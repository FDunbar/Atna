//============================================================================
// Name        : cpp.cpp
// Author      : Frankie
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
 //lab 4, For your lab today write  a c++ program that creates adds up the numbers between
// 0 and a user specified input using a while loop and prints the result to the screen
#include <iostream>
using namespace std;

int main() {
	int numb;
	int x;
	x = 0;
	cout << "Input a number to print out integers between 0 and that number on the screen" <<endl;
	cin >> numb;

	while (x <= numb){
	
		cout << (x++) << endl;
	}
	return 0;
}
