#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3];
    cout<<"Enter Elements in 2d array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nEven numbers in array are:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]%2==0)
            {
                cout<<a[i][j]<<endl;
            }
        }
    }
    cout<<"\nOdd numbers in array are:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]%2!=0)
            {
                cout<<a[i][j]<<endl;
            }
        }
    }
    return 0;
}