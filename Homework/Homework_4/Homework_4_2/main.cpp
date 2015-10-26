#include <iostream>

using namespace std;

int distance(int t,int a, int v,int y)
{
    int d;
    d = y+(v*t)+(.5*a*t*t);
    return d;
}
 int main()
{
    double y,a,v,t,d;
    cout<< "Enter initial height" <<endl;
    cin>> y;
    cout<< "Enter acceleration value"<< endl;
    cin>>a;
    cout<< "Enter Initial velocity" << endl;
    cin>> v;
    cout<< "Enter time" << endl;
    cin>> t;
    d= distance(y,a,v,t);
    cout<< "Distance traveled is:" << d <<endl;
    return 0;
}
