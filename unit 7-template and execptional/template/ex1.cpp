#include<iostream>
using namespace std;
template <class t1>
class test
{
t1 a;
public:
void add(t1 x,t1 y)
{
    a=x+y;
}
void mul(t1 x,t1 y)
{
    a=x*y;
}
void display()
{
    cout<<"a= "<<a<<"\n";
}

};
int main()
{
    test <int> testi;
    test <float> testf;
    testi.add(7,4);
    testi.display();
    testi.mul(7,9);
    testi.display();
    testf.add(7.4,8.6);
    testf.display();
    testf.mul(8.2,2.3);
    testf.display();
}