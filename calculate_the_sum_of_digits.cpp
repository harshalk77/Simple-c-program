#include<iostream>
using namespace std;
int main()
{
    // Declaring reminder,number,and sum
    int reminder,n,sum=0;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    // do while loop
    do
    {
        reminder=n%10;
        sum=sum+reminder;
        n=n/10;
    }
    while(n>0);
    // Displaying sum of entered number
    cout<<"The sum of entered number is "<<sum<<endl;

    return 0;
}