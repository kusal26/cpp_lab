#include<iostream>
using namespace std;
template<class t1 ,class t2>
class test
{
t1 a ;
t2 b;
public:
test(t1 x,t2 y)
{
    a=x;
    b=y;
}
void show()
{
    cout<<"a= "<<a<<"\nb="<<b;
}

};

int main()
{
    test <int,float>test1(4,5.3);
    test <float,int>test2(4.2,5);

    test1.show();
    test2.show();

    
}