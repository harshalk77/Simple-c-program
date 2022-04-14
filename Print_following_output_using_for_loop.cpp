#include<iostream>
using namespace std;
int main()
{
    // declaring i,j,and taking user input of n
    int i,j,n;
    cout<<"Enter Number: ";
    cin>>n;
    // using for loop
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
    cout<<"\n";
    }
    return 0;
}