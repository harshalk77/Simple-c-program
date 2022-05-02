#include<iostream>
using namespace std;
void max(int a,int b,int c);
int main()
{
    int a,b,c;
    cout<<"Enter Any Three number: "<<endl;
    cin>>a>>b>>c;
    max(a,b,c);
    return 0;
}
void max(int a,int b,int c)
{
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