#include <iostream>

using namespace std;

int getArea(int w, int l)
{
    int a;
    a= w*l;
    return a;
}
int getParim(int w, int l)
{
    int p;
    p= 2*(l+w);
}
int main()
{
    double w,l,p,a;
    cout<< "Enter Rectangle Width"<< endl;
    cin>> w;
    cout<< "Enter Rectangle Length"<<endl;
    cin>> l;
    a = getArea(w,l);
    p = getParim(w,l);

    cout<< "The area of the rectangle is"<<a<< endl;
    cout<< "The parimter length of the rectangle is"<<p<< endl;
    return 0;
}
