#include<iostream>
using namespace std;
int strong(int n);   //Function Declaration

int main()
{
    int n,z;
    cout<<"Enter Number: ";
    cin>>n;
    z=strong(n);    //function call
    if(n==z)
    {
        cout<<"The number is strong"<<endl;
    }
    else
    {
        cout<<"The number is not strong"<<endl;
    }
    return 0;
}
int strong(int n)    //function definition
{
    int i,r,sum=0;

    while(n>0)
    {
        int r1=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            r1=r1*i;
        }
        sum=sum+r1;
        n=n/10;
    }
    return sum;
}