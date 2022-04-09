#include<iostream>
using namespace std;
int main()
{
	double s,gross,da,ta;
	
	//Taking user salary input
	cout<<"Enter salary of person: ";
	cin>>s;
	
     //calculating Dearness Allowance,Travelling Allowance and Gross salary
     da=s*80/100;
     ta=s*20/100;
     gross=(s+da+ta);
     
     //Displaying the gross salary
     cout<<"\nThe Gross Salary of Person is "<<gross<<endl;
     return 0;
}
