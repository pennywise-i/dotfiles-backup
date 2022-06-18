//Program to overload plus(+) operator

#include<iostream>
using namespace std;

class student
{
  int num;
  public: 
    void input(int a)
      {
          num=a;
      }

      student operator*(student &obj)
      {
          student a;
          a.num=num*obj.num;
          return(a);
      }

      void print()
      {
        cout<<"This is the operator overloading "<<num<<endl;
      }
};

int main()
{
    student x1,y1,res;
    x1.input(5);
    y1.input(3);
    res=x1*y1;
    res.print();
}

