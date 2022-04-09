#include<iostream>
using namespace std;

int main()
{
	int a,b,sum,sub,mul,mod;
	double div;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	
	sum =a+b;
	sub =a-b;
	mul =a*b;
	div =a/b;
	mod =a%b;
	
	cout<<"\nThe sum of Two number is "<<sum;
	cout<<"\nThe substraction of two number is "<<sub;
	cout<<"\nThe Multiplication of two number is "<<mul;
	cout<<"\nThe division of Two number is "<<div;
	cout<<"\nThe modulus of two number is "<<mod;
	
	return 0;
}
