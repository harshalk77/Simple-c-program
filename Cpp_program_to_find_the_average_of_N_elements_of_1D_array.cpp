#include<iostream>
using namespace std;
int main()
{
    int i,average,sum=0,n;
    //Taking user input of no of elements in array
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    int a[n];
    //using for loop to scan elements in array
    cout<<"Enter Elements in array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    average=sum/n;
    cout<<"Average of "<<n<<" elements in array is "<<average<<endl;
    return 0;
}