#include<iostream>
using namespace std;
int main()
{
    // Taking user input of Integer
    int n;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;

    // switch condition
    switch(n%2)
    {
        case 0:
        cout<<n<<" is a Even number."<<endl;
        break;

        case 1:
        cout<<n<<" is a Odd number."<<endl;
        break;

        default:
        cout<<"Invalid Input!"<<endl;
    }
    return 0;
}