#include<iostream>
using namespace std;
class real
{
    int a,b;
    public:

    real(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()

{
    cout<<"a::"<<a<<" "<<"b::"<<b;
}

    void operator -()
    {
        a=-a;
        b=-b;
    }

};
int main()
{
    real r(5,7);
    r.display();
    -r;
    r.display();

}