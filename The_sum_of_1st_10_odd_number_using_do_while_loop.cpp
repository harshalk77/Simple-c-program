#include<iostream>
using namespace std;
int main()
{
    // declaring i and sum
    int i=1,sum=0;
    // using do while loop
    do
    {
        sum=sum+i;
        i=i+2;
    }
    while(i<=20);
    // displaying sum
    cout<<"The sum of 1st 10 odd number is "<<sum<<endl;
    return 0;
}