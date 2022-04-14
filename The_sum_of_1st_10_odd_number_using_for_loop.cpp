#include<iostream>
using namespace std;
int main()
{
    // Declaring i and value of sum
    int i,sum=0;
    // using for loop
    for(i=1;i<=20;i=i+2)
    {
        sum=sum+i;
    }
    // displaying sum
    cout<<"The sum of 1st 10 odd number is "<<sum<<endl;
    return 0;
}