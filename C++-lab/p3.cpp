#include<iostream>
using namespace std;

class program
{
    public:

    int c;
    program():c(5) {}

    void operator -- ()
    {
        --c;
    }

    void display(){
        cout<<c;
    }
};

int main()
{
    program obj;
    --obj;
    obj.display();
}
