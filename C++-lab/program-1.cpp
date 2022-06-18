#include<iostream>
using namespace std;

class fun{
	
	public:
		inline void max()
		{
			int n1,n2,n3;
			
			cout<<"Enter numbers here "<<endl;
			cin>>n1>>n2>>n3;
			
			if(n1 >= n2 && n1 >= n3)
				cout<<"This is biggest num "<<n1<<endl;
			if(n2 >= n1 && n2 >= n3)
				cout<<"This is biggest num "<<n2<<endl;
			if(n3 >= n1 && n3 >= n2)
				cout<<"This is biggest num "<<n3<<endl;
		}
	
};

int main()
{
     fun obj;
     obj.max();
}
