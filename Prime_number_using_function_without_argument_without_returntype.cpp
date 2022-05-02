#include<iostream>
using namespace std;
void prime();

int main()
{
    prime();
    return 0;
}
void prime()
{
    int n,i,count=0;
    cout<<"Enter any positive Integer: ";
    cin>>n;
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            count =1;
            break;
        }
    i++;
    }
    if(n==0 || n==1)
    {
        count =1;
    }
    if(count == 0)
    {
        cout<<"Entered Number is Prime."<<endl;
    }
    else
    {
        cout<<"Entered number is not prime."<<endl;
    }
}