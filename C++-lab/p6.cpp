#include<iostream>
using namespace std;

class mathmatic{
    public :
         
         int sum=12;

         mathmatic(){
             sum=(27)/3+5+7/12;
            // 327-3+2+7=sum;
         }
};

int main()
{
    mathmatic w;
    cout<<"This is SUM "<<w.sum<<endl;
    return 0;
}
