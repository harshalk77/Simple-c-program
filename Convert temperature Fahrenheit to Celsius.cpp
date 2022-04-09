#include<iostream>
using namespace std;
int main()
{
	double f,c; // where f represents fahrenheit and c represents celsius
	
	//Taking input of fahrenheit
	cout<<"Enter Fahrenheit value: ";
	cin>>f;
	
	//converting fahrenheit into celsius
	c=(f-32)*(5/9);
	
	//displaying celsius value
	cout<<"The Temperature in celsius is "<<c<<endl;
	return 0;
	
	
}
