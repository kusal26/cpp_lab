// constructor in derived class
#include <iostream>
using namespace std;
class alpha
{
    int i;

public:
    alpha(int x)
    {
        i = x;
        cout << "aplha is initialized\n";
    }
    ~alpha()
    {
        cout<<"alphais destroyed\n";
    }

    void show1()
    {
        cout << "alpha = " << i << endl;
    }
};
class beta
{

    int j;

public:
    beta(int y)
    {
        j = y;
        cout << "beta is initialixzed\n";
    }
    ~beta()
    {
        cout<<"beta is destroyed\n";
    }
    void show2()
    {
        cout << "beta = " << j;
    }
};
class gamma:public beta, virtual public alpha
{
    int m,n;
    public:
    gamma(int i,int j,int c,int d):alpha(i),beta(j)
    {
        m=c;
        n=d;
        cout<<"gamma is initialized\n";
    }
    ~gamma()
    {
        cout<<"gamma is destroyed\n";
    }
    void show3()
    {
        cout<<"m= "<<m<<" "<<"n ="<<n<<endl;
    }

};
int main()
{
    gamma gm(4,5,7,8);
    gm.show1();
    gm.show2();
    gm.show3();
}