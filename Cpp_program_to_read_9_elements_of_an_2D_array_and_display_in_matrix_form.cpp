#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3];
    //taking user input of elements in 2d array;
    cout<<"Enter Elements in 2d array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    //displaying elements in array in matrix form
    cout<<"\nElements in 2d array are\n:"<<endl;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}