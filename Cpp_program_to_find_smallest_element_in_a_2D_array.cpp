#include<iostream>
using namespace std;
int main()
{
    int i,j,small,a[3][3];
    //taking user input of elements in array
    cout<<"Enter Elements in 2d array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    small=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]<small)
            {
                small=a[i][j];
            }
        }
    }
    cout<<"Smallest Elements in array is "<<small<<endl;
    return 0;
}