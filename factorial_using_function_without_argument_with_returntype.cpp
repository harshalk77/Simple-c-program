#include<iostream>
using namespace std;
int fact();
int main()
{
    int r,n;
    r=fact();
    cout<<"The factorial is "<<r<<endl;
    return 0;
}
int fact()
{   
    int i=1,f=1,n;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
