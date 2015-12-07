#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int elements;
    cout << "Enter an integer of elements" << endl;

    cin>> elements;

    int*pntr = new int[elements];


    for (int i=0; i<elements; ++i)

    {
        pntr[i] = rand()%100+1;
    }
for (int i=0; i<elements; ++i)
{
    cout<< pntr[i];
}

    delete pntr;

    return 0;
}
