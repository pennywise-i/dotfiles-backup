#include<iostream>
using namespace std;

class volume 
{
  public:
    
      void rectangle(int a,int b,int c)
      {
        int vol;

          vol=a*b*c;
          cout<<"This is the Volume of rectangle "<<vol<<endl;
      }

      void cube(int a)
      {
        int vol;
          
          vol=a*a*a;
          cout<<"This is the Volume of cube "<<vol<<endl;
      }

      void cylinder(int a,int b)
      {
        int vol,pi=3.14;
          
          vol=pi/a*a/b;
          cout<<"This is the Volume of cylinder "<<vol<<endl;
      }
};

int main()
{
   volume obj;
   obj.rectangle(5,3,8);
   obj.cube(12);
   obj.cylinder(8,2);
}
