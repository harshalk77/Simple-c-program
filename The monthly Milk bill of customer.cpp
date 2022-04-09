#include<iostream>
using namespace std;
int main()
{
	double r,l,bill;
	
	//input the amount of milk and rate of milk
	cout<<"Enter amount of milk per litre: ";
	cin>>r;
	cout<<"Enter daily milk taken(In litre): ";
	cin>>l;
	
	bill=(r*l)*30;
	
	//displaying monthly bill of customer
	cout<<"\nThe monthly Milk bill of customer is "<<bill<<endl;
	return 0;
}
