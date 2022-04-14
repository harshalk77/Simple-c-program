#include<iostream>
using namespace std;
int main()
{
    //Taking user input of ph value
    int ph;
    cout<<"Enter Ph value of Chemical: ";
    cin>>ph;

    //checking ph value of element
    if(ph==7)
    {
        cout<<"Chemical is a Neutral"<<endl;
    }
    else if(ph<7)
    {
        cout<<"Chemical is a Acid"<<endl;
    }
    else
    {
        cout<<"Chemical is a Alkaline"<<endl;
    }
    return 0;
}