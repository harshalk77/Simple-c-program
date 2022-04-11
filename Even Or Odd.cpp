#include<iostream>
using namespace std;
int main()
{
	int n;
	
	//taking Input from user
	cout<<"Enter Any positive Integer: ";
	cin>>n;
	
	//condition for even number: 
	if(n%2==0)
	{
		cout<<"\n"<<n<<" is Even number"<<endl;
	}
	else
	{
		cout<<"\n"<<n<<" is Odd number"<<endl;
	}
	
	return 0;
}
