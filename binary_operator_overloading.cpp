#include<iostream>
using namespace std;
class A
{
    int a, b;
    public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    A operator +(A obj)
    {
        A temp(0,0);
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }

};
int main()
{
    A ob2(5,7),ob1(7,5),ob3;
    ob2.show();
    ob3=ob1+ob2;
    }