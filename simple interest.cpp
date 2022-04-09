#include<iostream>
using namespace std;
int main()
{
	double p,t,r,si;
	
	// Taking input from user 
	cout<<"Enter principle: ";
	cin>>p;
	cout<<"Enter Time period: ";
	cin>>t;
	cout<<"Enter rate: ";
	cin>>r;
	
	si=(p*t*r)/100;
	
	// displaying the simple interest
	cout<<"The simple interest is "<<si<<endl;
	return 0;
}
