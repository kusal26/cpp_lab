#include<iostream>
#include<math.h>
using namespace std;
template <class t>
class rectangle
{
    t a,b;
    public:
    rectangle(t x,t y)
    {
        a=x;
        b=y;
    }
    t get_a()
    {
        return a;
    }
    t get_b()
    {
        return b;
    }
    
};
template <class t1>
class polar
{
 t1 radius;
 t1 thita;
 public:
 polar(rectangle<float> r)
 {
     t1 tempx=r.get_a();
 t1 tempy=r.get_b();
 radius=tempx*tempy;
 cout<<"radius="<<radius;
 }
 
};
int main()
{
    rectangle <float> r(4.5,2.3);
    polar <float> f(r);
}
