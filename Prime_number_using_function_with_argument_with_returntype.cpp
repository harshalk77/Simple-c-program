#include<iostream>
using namespace std;
int prime(int i,int n,int count);
int main()
{
    int i,n,r,count=0;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    r=prime(i,n,count);
    if(n==1 || n==0)
    {
        r = 1;
    }
    if(r==0)
    {
        cout<<"The Entered Number is prime."<<endl;
    }   
    else
    {
        cout<<"The Entered Number is not prime."<<endl;
    }
    return 0;
}
int prime(int i,int n,int count)
{
    i=2;
    while(i<n/2)
    {
        if(n%i==0)
        {
            count = 1;
            break;
        }
    i++;
    }
    return count;
}