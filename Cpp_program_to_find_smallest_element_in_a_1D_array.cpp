#include<iostream>
using namespace std;
int main()
{
    int i,small,a[5];
    cout<<"Enter elements in array:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    small = a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    cout<<"The smallest element in array is "<<small<<endl;
    return 0;
}