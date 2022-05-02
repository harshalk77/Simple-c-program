#include<iostream>
using namespace std;
int max();
int main()
{
    int r;
    r=max();
    cout<<r<<" is Maximum Among Three."<<endl;
    return 0;
}
int max()
{
    int a,b,c;
    cout<<"Enter Any Three Positive Integer: "<<endl;
    cin>>a>>b>>c;
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