#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3],b[3][3],sum[3][3];
    //taking user input of elements in A array
    cout<<"Enter Elements in A array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    //taking user input of elements in A array
    cout<<"Enter Elements in B array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    //sum of two array
    cout<<"The sum of elements of two array are:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            cout<<"sum["<<i<<"]["<<j<<"]= "<<sum[i][j]<<endl;
        }
    }
    return 0;
}