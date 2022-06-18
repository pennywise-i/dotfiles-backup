#include <iostream>
using namespace std;

class mammals
{
    public:

        void dog()
        {
            cout<<"I am mammal"<<endl;
        }
};
class marin

{
    public:

        void tortois()
        {
            cout<<"I am marine animal"<<endl;
        }
};
class blue_whale : public mammals , public marin
{
    public:

        void fish()
        {
            cout<<"I belong to both"<<endl;
        }
};

int main()
{
    blue_whale obj;
    obj.dog();
    obj.tortois();
    obj.fish();     
}
