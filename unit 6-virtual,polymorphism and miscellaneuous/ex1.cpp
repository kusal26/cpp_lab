#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"base class is implemented\n";
    }
};
class B:public A
{
    public :
    void show()
    {
        cout<<"derived is implimented here\n";
    }
};
int main()
{
   A a;
   B b;
   A *bsptr;
   bsptr=&a;
   bsptr->show();
   bsptr=&b;
   bsptr->show();
   a.show();


    
}