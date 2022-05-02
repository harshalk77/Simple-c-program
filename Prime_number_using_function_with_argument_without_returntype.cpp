#include<iostream>
using namespace std;
void prime(int n,int i,int count);

int main()
{
    int n,i,count=0;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    prime(n,i,count);
    return 0;
}
void prime(int n,int i,int count)
{
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            count = 1;
            break;
        }
    i++;
    }
    if(n==0 || n==1)
    {
        count = 1;
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