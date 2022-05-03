#include<iostream>
using namespace std;
int main()
{
    int i,j,search,count=0,a[3][3];
    //taking user input of elements in array
    cout<<"Enter Elements in array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    //taking user input of element to search
    cout<<"Enter Element you want to search: ";
    cin>>search;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==search)
            {
                cout<<"The element appears at ("<<i<<","<<j<<")"<<" index"<<endl;
                count++;
            }
        }
    }
    if(count==0)
    {
        cout<<"Element not apppear in array."<<endl;
    }
    return 0;
}