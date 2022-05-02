#include<iostream>
using namespace std;
int max(int a,int b,int c);
int main()
{
    int a,b,c,r;
    cout<<"Enter Any Three Positive Integer: "<<endl;
    cin>>a>>b>>c;
    r=max(a,b,c);
    cout<<r<<" is Maximum Among Three."<<endl;
    return 0;
}
int max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}