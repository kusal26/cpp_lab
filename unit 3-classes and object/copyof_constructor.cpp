#include<iostream>
using namespace std;
class copy1
{
    int a;
    public:
    copy1(int i)
    {
        a=i;
    }
    copy1(copy1 &c)
    {
        a=c.a;

    }
    void show()
    {
        cout<<"a::"<<a<<endl;
    }
};
int main()
{
    copy1 t(5);
    copy1 z(t);
    t.show();
    z.show();

    

}