#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	//taking User input for Sides of triangle
	cout<<"Enter Three sides of triangle: "<<endl;
	cin>>a>>b>>c;
	
	//condition
	if(a==b && b==c && c==a)
	{
		cout<<"The Traingle is Equilateral triangle"<<endl;
	}
	else if(a==b || b==c || c==a)
	{
		cout<<"The Traingle is Isoceles triangle"<<endl;
	}
	else
	{
		cout<<"The Traingle is scalene triangle"<<endl;
	}
	
	return 0;
}
