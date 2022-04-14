#include<iostream>
using namespace std;
int main()
{
    //taking user input of character
    char ch;
    cout<<"Enter Any Alphabet: ";
    cin>>ch;

    //checking alphabet is upper case or lower case
    if(ch>=65 && ch<=90)
    {
        cout<<ch<<" is a Uppercase letter."<<endl;
    }
    else if (ch>=97 && ch<=122)
    {
        cout<<ch<<" is a Lowercase letter."<<endl;
    }
    else 
    {
        cout<<"Invalid Input!"<<endl;
    }

    return 0;

}