#include<iostream>
using namespace std;
int main()
{
    //Taking user input of month
    int n;
    cout<<"Enter no of month: ";
    cin>>n;

    //checking no of days by its month
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
    {
        cout<<"The month has 31 days."<<endl;
    }
    else if(n==4||n==6||n==9||n==11)
    {
        cout<<"The month has 30 days."<<endl;
    }
    else if(n==2)
    {
        cout<<"The month has 28/29 days."<<endl;
    }
    else
    {
        cout<<"Invalid Input!"<<endl;
    }

    return 0;

}