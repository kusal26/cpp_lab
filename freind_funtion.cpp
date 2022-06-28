#include<iostream>
using namespace std;
class A
{
int a,b;
public:
A(int x,int y)
{
    a=x;
    b=y;
}

friend void fun(A ob);

};
void fun(A ob)
{
    int c;
    c=ob.a+ob.b;
    cout<<"c= "<<c;
}
int main()
{
    A a(4,5);
    fun(a);
    
}