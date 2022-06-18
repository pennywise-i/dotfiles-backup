#include<iostream>
using namespace std;

class man 
{
    public:

        void funman()
        {
            int a=23,b=24;
            cout<<"This is number \n"<<a<<endl<<b<<endl;
            
        }
};

class wife : public man
{
    public:

        void funwife()
        {
            cout<<"This is wife"<<endl;
        }
};

int main(void)
{
    wife obj;
    obj.funman();
    obj.funwife();
    printf("This is Fucking Programm");
  
}
