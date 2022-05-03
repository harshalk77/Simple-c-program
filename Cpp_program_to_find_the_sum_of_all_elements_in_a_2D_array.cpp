#include<iostream>
using namespace std;
int main()
{
    int i,j,sum=0,a[3][3];
    //taking user input of elements in 2d array;
    cout<<"Enter Elements in 2d array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    //sum of elements in array
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
    }
    cout<<"The sum of elements in 2d array is "<<sum<<endl;
    return 0;
}