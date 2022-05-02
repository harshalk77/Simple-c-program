#include<iostream>
using namespace std;
int prime();

int main()
{
    int r;
    r=prime();
    if(r==0)
    {
        cout<<"Entered Number is Prime."<<endl;
    }
    else
    {
        cout<<"Entered number is not prime."<<endl;
    }
    return 0;
}
int prime()
{
    int n,i,count=0;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    i++;
    }
    if(n==0 || n==1)
    {
        count=1;
    }
    return count;
}