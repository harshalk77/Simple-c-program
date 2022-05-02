#include<iostream>
using namespace std;
void max();
int main()
{
    max();
    return 0;
}
void max()
{
    int a,b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"\n1st number maximum among three number."<<endl;
        }
        else
        {
            cout<<"\n3rd number maximum among three number."<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"\n2nd number maximum among three number."<<endl;
        }
        else
        {
            cout<<"\n3rd number maximum among three number."<<endl;
        }
    }
}
