//Franklyn Dunbar
//Homework 3.2

#include <iostream>

using namespace std;

int main()
{
    int x, f=1; //input number
    cout<< "Enter the number whos factorial you would like to find" <<endl;
    cin>>x;

    for (int y=1; y<=x; y++) //for loop repeats the factorial
    {
        f=f*y;
    }

    cout << "The factorial of"<<x<<"is"<<f << endl;
    return 0;
}
