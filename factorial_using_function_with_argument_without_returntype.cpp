#include<iostream>
using namespace std;
void fact(int n ,int f, int i);
int main()
{
    int n,f=1,i=1,r;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    fact(n,f,i);
    return 0;
}
void fact(int n ,int f, int i)
{   
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"The factorial of "<<n<<" is "<<f<<endl;
}
