#include<iostream>
using namespace std;
class grand
{
    int money=40;

    public:
    void fun1()
    {
        cout<<"money= "<<money<<endl;
    }
};
class father:private grand
{
    string car="volco";
    public:
    void func2()
    {
        cout<<"car="<<car<<endl;

    }
};
class son:public father
{
    
};
int main()
{
    son s;
   // s.fun1();
    s.func2();
    father f;
    f
}