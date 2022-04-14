#include<iostream>
using namespace std;
int main()
{
    // Taking user input of number and declaring i and count
    int i,n,count=0;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    // if condition for 0 and 1 number
    if(n==0 || n==1)
    {
        count =1;
    }
    i=2;
    // using while loop
    while(i<=n/2)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    i++;
    }
    //checking number is prime or not
    if(count==0)
    {
        cout<<n<<" is a prime number."<<endl;
    }
    else
    {
        cout<<n<<" is a not prime number."<<endl;
    }
    return 0;
}