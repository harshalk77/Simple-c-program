#include<iostream>
using namespace std;
int main()
{
	int a,b,add,sub,mul,div;
	char op;
	
	// taking input from user
	cout<<"Enter Operation: ";
	cin>>op;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	
	// switch condition 
	
	switch(op)
	{
		case '+':
			add=a+b;
			cout<<"\nAddition of two number is "<<add<<endl;
			break;
		
		case '-':
			sub=a-b;
			cout<<"\nSubstraction of two number is "<<sub<<endl;
			break;
			
		case '*':
			mul=a*b;
			cout<<"\nMultiplication of two number is "<<mul<<endl;
			break;
			
		case '/':
			div=a/b;
			cout<<"\nDivsion of two number is "<<div<<endl;
			break;
		
		default:
		cout<<"\nInvalid Input!"<<endl;				
	}
	
	return 0;
	
	
}
