#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()=0;
};
class B:public A
{
    public :
    void show()
    {
        cout<<"show is implimented here\n";
    }
};
int main()
{
    A *ptr;
    ptr=new B;
    ptr->show();

    
}