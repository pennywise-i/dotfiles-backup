//Program to display patterns using constructor

#include<iostream>
using namespace std;

class onetwothree
{
	public:
		onetwothree()
		{
			int i,j;
			 for (i = 1;i <= 5; ++i)
			 {
				 for(j = 1;j <= i; ++j)
				 {
					 cout<<" *";
				 }
			    cout<<"\n";
			 }
		}
};

int main()
{
	onetwothree obj;
}
