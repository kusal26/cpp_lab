//unary operator overloading
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
void show()
{
    cout<<a<<" "<<"b"<<b<<endl;
}
 
 
 void operator -()
{
    a=-a;
    b=-b;

}

};
int main()
{
    A a(78,8);
    a.show();
    -a;
    a.show();

}