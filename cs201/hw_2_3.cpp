//============================================================================
// Name        : hw_2_3.cpp
// Author      : Frankie
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
// Input three integers to have them printed back in ascending order
int main() {
	int x;
	int y;
	int z;
	int w;

	cout << "Enter three integers to have them printed back in ascending order" << endl;
	cout << "Enter first value" << endl;
	cin >> x;
	cout << "Enter second value" << endl;
	cin >> y;
	cout << "Enter third value" << endl;
	cin >> z;

	if( (x > y) && (y > z))  // Use conditional statements to preprocess a variable before the switch
	 w = 1;

	else if ( (x > z) && (z > y))
	w = 2;

	else if ((y > x) && (x > z))
	w = 3;

	else if ((y > z) && (z > x))
		w = 4;

	else if ( (z > x) && (x > y))
		w = 5;

	else if( (z > y) && (y > x) )
		w = 6;

	switch(w){
		case 1 :
	    cout << x <<  y  << z << endl;
	    break;

		case 2 :
		cout << x <<  z  << y << endl;
		break;

		case 3 :
		cout << y <<  x  << z << endl;
		break;

		case 4 :
		cout << y <<  z  << x << endl;
		break;

		case 5 :
		cout << z  <<  x  << y << endl;
		break;

		case 6 :
		cout << z <<  y  << x << endl;
		break;

		default:
			cout << "Bad input" << endl;
		break;


	}
	return 0;
}
