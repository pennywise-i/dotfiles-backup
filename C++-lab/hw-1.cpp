#include <iostream>
using namespace std;
class Primenum 
{
    public:
        int a,b=0,num=2;
            public:
            Primenum(int n)
            {
                int a,i;
                while (num<=a/2)
                {
                    if(a % num == 0)
                    {
                        b==1;
                        break;
                    }
                    i++;
                }
                if (b==0)
                {
                    cout<<"it is a prime number"<<endl;
                }else
                {
                    cout<<"it is not a prime number"<<endl;
                }
                
            }

};
int main()
{
    int num;
    cout<<"Enter a num"<<endl;
    cin>>num;
    Primenum objP(num);
}