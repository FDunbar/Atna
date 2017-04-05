
/*
two functions, one that takes a vector of doubles and returns the sum of that vector.
 The other should take a vector of double and return the mean of that vector.
*/


#include <iostream>
#include <vector>
using namespace std;

#ifndef _frankfunc_h_included
#define _frankfunc_h_included




double vecsum(vector<double>&v){
double n=0;

for(int i=0; i<v.size(); ++i)
       n+= v.at(i);

cout << "The sum of the vector is:  "<< endl;
 return n;

}

double meanvec(vector<double>&v){
double j;
double n=0;
double k;

j = v.size();

for (int i = 0; i<j; ++i)
    n+= v.at(i);

k = n/j;

cout << "The mean of the vector is:   " <<endl;

return k;

}

void fillArray(unsigned char array[], int size)
{

	for(int i=0; i<size; ++i) //fills array of a given size with random numbers
	{
		array[i]=rand()%size;
	}
}

void printArray(unsigned char array[], int size)
{
	for(int i=0; i<size; ++i)
	{
		cout << array[i] << endl;
	}
}
#endif
