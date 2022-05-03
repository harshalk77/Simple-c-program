#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3],b[3][3],mul[3][3];
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
    //multiplication of two array
    cout<<"The Multiplication of elements of two arrays are:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mul[i][j]=a[i][j]*b[i][j];
            cout<<"mul["<<i<<"]["<<j<<"]= "<<mul[i][j]<<endl;
        }
    }
    return 0;
}