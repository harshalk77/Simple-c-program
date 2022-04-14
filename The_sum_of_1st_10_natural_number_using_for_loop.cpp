#include<iostream>
using namespace std;
int main()
{
    // Declaring i and value of sum
    int i,sum=0;
    // using for loop
    for(i=0;i<=10;i++)
    {
        sum=sum+i;
    }
    // displaying sum
    cout<<"The sum of 1st 10 natural number is "<<sum<<endl;
    return 0;
}