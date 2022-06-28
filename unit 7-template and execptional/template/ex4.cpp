//FUNCTION TEMPLATE
#include<iostream>
using namespace std;
template <class t>
void swap1(t &a,t &b)
{
    t temp=a;
    a=b;
    b= temp;

}
void fun(int x,int y)
{
   cout<<"before swapping "<<x<<" "<<y;
   swap1(x,y);
   cout<<" \n after swapping "<<x<<" "<<y;

    
}

int main()
{
    fun(2,5);
    return 0;
}

