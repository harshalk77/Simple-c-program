#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	//Taking input value of a,b,c
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	cout<<"Enter 3rd Number: ";
	cin>>c;
	
	//condition
	if(a>b)
	{
		if(a>c)
		{
			cout<<"\n"<<a<<" is Maximum among three numbers"<<endl;
		}
		else
		{
			cout<<"\n"<<c<<" is Maximum among three numbers"<<endl;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"\n"<<b<<" is Maximum among three numbers"<<endl;
		}
		else
		{
			cout<<"\n"<<c<<" is Maximum among three numbers"<<endl;
		}
	}
	
	return 0;
}
