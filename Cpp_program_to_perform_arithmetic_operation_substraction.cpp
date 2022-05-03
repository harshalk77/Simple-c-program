#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3],b[3][3],sub[3][3];
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
    //sub of two array
    cout<<"The Substraction of elements of two arrays are:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
            cout<<"sub["<<i<<"]["<<j<<"]= "<<sub[i][j]<<endl;
        }
    }
    return 0;
}