#include<iostream>
using namespace std;
void fact();
int main()
{
    fact();
    return 0;
}
void fact()
{   
    int n,f=1,i=1,r;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"The factorial of "<<n<<" is "<<f<<endl;
}
