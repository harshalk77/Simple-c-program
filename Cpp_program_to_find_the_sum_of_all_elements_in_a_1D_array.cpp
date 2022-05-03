#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,a[5];
    cout<<"Enter elements in array:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum of all elements in array is "<<sum<<endl;
    return 0;
}