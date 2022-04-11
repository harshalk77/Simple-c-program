#include<iostream>
using namespace std;
int main()
{
	double a,b,c,d,f,p;  //p represents percentage 
	cout<<"Enter Five Subjects marks:"<<endl;
	cin>>a>>b>>c>>d>>f;
	
	//calculating and printing percentage
	p=(a+b+c+d+f)*100/500;
	cout<<"\nTHe percentage is "<<p<<endl;
	
	//condition
	if(p>=90)
	{
		cout<<"Grade A";
	}
	else if(p>=80 && p<=89)
	{
		cout<<"Grade B";
	}
	else if(p>=70 && p<=79)
	{
		cout<<"Grade C";
	}
	else if(p>=60 && p<=69)
	{
		cout<<"Grade D";
	}
	else if(p>=50 && p<=59)
	{
		cout<<"Grade E";
	}
	else if(p>=45 && p<=49)
	{
		cout<<"Grade F";
	}
	else if(p<=40)
	{
	     cout<<"Fail!";	
	}
	else
	{
		cout<<"Invalid Input";
	}
	
	return 0;
}
