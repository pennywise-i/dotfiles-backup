#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int nu;

    cout<<"Enter your age "<<endl;
    cin>>nu;

    if (nu < 18)
    {
        cout<<"Your Not Eligable to Drive"<<endl;
    }else if (nu >= 18)
    {
        cout<<"Your Are Eligable to Drive"<<endl;
    }
    
    return 0;
}
