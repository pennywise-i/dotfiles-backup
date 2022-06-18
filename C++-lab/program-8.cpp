#include <cstdio>
#include <iostream>
using namespace std;

class man
{
    public:

    void fun1()
    {
        int i,a=12;

        for (i = 0; i < a; i++) {
        cout<<"*";
        }
    }

};

int main()
{
    man o1;
    o1.fun1();
}
