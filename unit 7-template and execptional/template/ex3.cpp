#include<iostream>
using namespace std;
template <class t1,class t2>
class test
{
t1 a;
t2 c;
public:
void add(t1 x,t1 y)
{
   a=x+y;
}
void typecast(t1 x,t2 y)
{
    a=x+y;
}
void show(){
    cout<<"a="<<a<<endl;
    }
};
int main()
{
    test<int,int> a;
    test<int,float> ty;
    a.add(7,5);
    ty.typecast(4,5.5);
    a.show();
    ty.show();
}