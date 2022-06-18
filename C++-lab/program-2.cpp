//Program to accept and age from user and check if age is greater than 18 if not than throw exception //
//

#include<iostream>
using namespace std;

int main()
{
	int nu;
	cout<<"Enter num here "<<endl;
	cin>>nu;

	try 
	{
		if(nu<18)
			throw "not applicable for driving licence";
		else
			cout<<"applicable for driving licence"<<endl;
	}

	catch(const char *n)
	{
		cout<<n<<endl;
	}
}

