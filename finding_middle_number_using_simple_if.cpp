#include<iostream>
using namespace std;
int main()
{
    //taking user input of 3 integer
    int a,b,c;
    cout<<"Enter Any Three integer:"<<endl;
    cin>>a>>b>>c;
    
    // checking a is middle number or not
    if(b<a && a<c || c<a && a<b)
    {
        cout<<a<<" is a Middle number."<<endl;
    }
    // checking b is middle number or not
    if(a<b && b<c || c<b && b<a)
    {
        cout<<b<<" is a Middle number."<<endl;
    }
    // checking c is middle number or not
    if(a<c && c<b || b<c && c<a)
    {
        cout<<c<<" is a Middle number."<<endl;
    }

    return 0;

}