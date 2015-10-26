#include <iostream>

using namespace std;

int multTable(int n)
{
    int a;
    a = n;
    return a;
    for (int a = 1: a<= 10: ++a)
    {
        cout<< setw(4) << a <<" : ";
        for (int n =11; n<= 20; ++n);
            cout << setw(4) << n*a;
        cout << endl;
    }
    }

int main()
{
    int n,a;
    cout<< "Enter value for n" << endl;
    cin>> n;

    a = multTable(n);
    return(0)



}

