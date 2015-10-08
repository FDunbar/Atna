

//Franklyn Dunbar
#include <iostream>

using namespace std;

int main()
{
    char input;
    double x,y;
    cout<<"Please enter two numbers:"<<endl;
    cin>>x;
    cin>>y;

    A1: cout<<endl;
    cout<<"Input one of the following characters:"<<endl;
    cout<<"1 = ADDITION"<<endl;
    cout<<"2 = SUBTRACTION"<<endl;
    cout<<"3 = MULTIPLICATION"<<endl;
    cout<<"4 = DIVISION"<<endl;

    cin>>input;
    switch(input)
    {
         case '1':
         cout<<"You entered addition."<<endl;
         cout<<"The numbers "<<x<<" + "<<y<<" equals "<<x+y<<endl;
         break;

         case '2':
         cout<<"You entered subtraction."<<endl;
         cout<<"The numbers "<<x<<" - "<<y<<" equals "<<x-y<<endl;
         break;

         case '3':
         cout<<"You entered multiplication."<<endl;
         cout<<"The numbers "<<x<<" * "<<y<<" equals "<<x*y<<endl;
         break;

         case '4':
         cout<<"You entered division."<<endl;
         cout<<"The numbers "<<x<<" / "<<y<<" equals "<<x/y<<endl;
         break;

         default:
         cout<<"Its not 1-4 man"<<endl;
         goto A1;
    }

    return 0;
}
