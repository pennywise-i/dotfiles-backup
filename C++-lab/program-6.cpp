#include<iostream>
using namespace std;

//Program to calculate factorial using constructor

class factorial
{
  public:

    factorial(int nu)
    {
      int i,fact=1;

      for(i = 1; i<=nu; i++)
      {
        fact=fact*i;
      }
      cout<<fact<<endl;
    }
};

int main()
{
  factorial obj(5);
}

