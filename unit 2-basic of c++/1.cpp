#include<iostream>
using namespace std;
class A
{
    int a=1,b=5;
    public:
    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
};
class B:public A
{
    public:
    int c;
    void show()
    {
        c=get_a()+get_b();
        cout<<c;
    }

};
