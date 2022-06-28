#include<iostream>
using namespace std;
class add
{
    int a,b;
    public:
    add(){}//default constructor needed
    add(int i)
    {
        a=i;
        
    }
    void show()
    {
        cout<<"a::"<<a;
    }

};
int main()
{
    int i=4;
    add ob;
    ob=i;
    ob.show();

    
}