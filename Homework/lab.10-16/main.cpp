#include <iostream>
#include<cstdlib>


using namespace std;

double mean(double arr[], int SIZE)
{
    double sum=0;
    for(int i=0; i<SIZE; ++i){
        sum=sum+arr[i];
    }
    return sum / SIZE;
}

int main()
{
    int SIZE;
   cout<< "Input size:"<< endl;
   cin>> SIZE;
   double arr[SIZE];

   for(int i=0;i<SIZE;++i){
        arr[i]=arr[i]*2;
   }


   cout<<mean(arr, SIZE)<<endl;
    return 0;
}




