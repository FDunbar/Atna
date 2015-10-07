#include <iostream>

using namespace std;

double mult( double w, double x, double y, double z)
{
   return (w+y+x+z)/4;
}
int main ( )
{
    double w,x,y,z;
    cout<<"Enter value of w:"<<endl;
    cin>>w;
    cout<<"Enter value of x:"<<endl;
    cin>> x;
    cout<< "Enter value of y:"<<endl;
    cin>> y;
    cout<< "Enter value of z:"<<endl;
    cin>> z;

    cout<< mult(w,x,y,z)<<endl;
    return 0;
}


