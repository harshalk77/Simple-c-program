#include<iostream>
using namespace std;
int main()
{
    int i,large,a[5];
    cout<<"Enter elements in array:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    large = a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    cout<<"The smallest element in array is "<<large<<endl;
    return 0;
}