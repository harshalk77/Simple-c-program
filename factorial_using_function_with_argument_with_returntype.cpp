#include<iostream>
using namespace std;
int fact(int n ,int f, int i);
int main()
{
    int n,f=1,i=1,r;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    r=fact(n,f,i);
    cout<<"The factorial of "<<n<<" is "<<r<<endl;
    return 0;
}
int fact(int n ,int f, int i)
{   
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
