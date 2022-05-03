#include<iostream>
using namespace std;
int main()
{
    int i,n;
    //taking user input of no of elements in array
    cout<<"Enter no of elements in array:";
    cin>>n;
    int a[n];
    //using for loop to scan elements in array
    cout<<"Enter Elements in array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //finding even numbers
    cout<<"Even numbers in array are:"<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}