//============================================================================
// Name        : hw_2_2.cpp
// Author      : Frankie
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int days;
int res;

int main() {

	cout << "To determine eligibility for the PFD, input the number of days you have been in Alaska and whether or not you intend to calim residency" << endl;
	cout <<"Input the number of days you have been in Alaska" << endl;
	cin >> days;
	cout << "Do you intend to claim residency? enter: 1 for yes  or 0 for no  " << endl;
	cin >> res;
	if(res < 180)
	{cout << " You have not been in Alaska long enough" << endl;}

else if ( res > 0 && days >= 180)
	{ cout << "You are eligibible for the PFD" << endl;}

	else
	{cout << "You are ineligible for the PFD" << endl;}


	return 0;
}
