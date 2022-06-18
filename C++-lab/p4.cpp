#include<iostream>
using namespace std;

class factorial
{   
    public:

    int i,num,fact=1;

    void fun1()
    {
        cout<<"Enter a num ";
        cin>>num;
        for ( i = 1; i <= num; i++)
        {   
            fact=fact*i;
        }
        
        cout<<"This is factorial "<<fact<<endl;
    }
};

int main()
{
    factorial obj;
    obj.fun1();
    return 0;
}
