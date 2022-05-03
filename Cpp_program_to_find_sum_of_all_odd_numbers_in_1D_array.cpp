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
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
        }
    }
    cout<<"The sum of odd numbers in array is "<<sum<<endl;
    return 0;
}