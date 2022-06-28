#include<iostream>
using namespace std;
class A
{
int a;
static int b;
public:
A(int x,int y)
{
    a=x; b=y;
}
void show()
{
    cout<<a<<" "<<b<<endl;
}

static void display() //static function can only access static member
{
    cout<<b;
}
int A::b=0;

};
//int A::b=0;
int main()
{
    A ob1(4,25),ob2(5,10);
    ob2.show();
    ob1.show();
    ob1.show();
    A::display();
}
