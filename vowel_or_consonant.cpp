#include<iostream>
using namespace std;
int main()
{
    //taking user input alphabet
    char ch;
    cout<<"Enter Any Alphabet: ";
    cin>>ch;

    //checking character is vowel
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<ch<<" is A vowel."<<endl;
    }
    else
    {
        cout<<ch<<" is A Consonant."<<endl;
    }
    return 0;
    
}