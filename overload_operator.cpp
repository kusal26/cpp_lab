#include<iostream>
using namespace std;
class overload
{
int a,b,c;
public:
void get_data(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
void operator-()
{
    a=-a;
    b=-b;
    c=-c;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    cout<<"c : "<<c<<endl;
}


};
int main()

{
    overload o;
    o.get_data(4,5,5);
    -o;
}