#include<iostream>
using namespace std;
int main()
{
    int i,a[5];
    cout<<"Enter elements in array:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements in array are:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"The element of index "<<i<<" is "<<a[i]<<endl;;
    }
    return 0;
}