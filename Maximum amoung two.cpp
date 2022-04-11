#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	//Taking user input
	cout<<"Enter A Number: ";
	cin>>a;
	cout<<"Enter B Number: ";
	cin>>b;
	
	//condition
	if(a>b)
	{
		cout<<"\n"<<a<<" is maximum amoung two"<<endl;
	}
	else
	{
		cout<<"\n"<<b<<" is maximum amoung two"<<endl;
	}
	return 0;
}
