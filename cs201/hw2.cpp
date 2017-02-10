//============================================================================
// Name        : hw2.cpp
// Author      : Frankie
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int cen;
	int feet;
	int inch;
	int inch2;



	cout << "Input a length in centimeters for conversation into foots and inches" << endl;

	cin >> cen;
	if (cen <= 0)
	{ cout << "Enter a positive integer" << endl;
	return (0);
	}

	feet = (.393701*cen)/12;
	inch2 = .393701*cen;
	inch = inch2%12;

	if( feet > 1)
	{
cout << "The inputed length is " << feet << "  feet and " << inch << " inches" << endl;
	}


else if (feet == 1 || inch == 0){
		cout << "The entereted length is " << feet << " foot" << endl;}

else if (feet < 1){
		cout << "The entered length is " << inch << " Inches" << endl;}



	return 0;
}
