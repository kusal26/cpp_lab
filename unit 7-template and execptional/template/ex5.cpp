#include<iostream>
using namespace std;
template <class t1,class t2>
void fun(t1 a,t2 b)
{
    cout<<"a= "<<a<<""<<"b= "<<b;
}
int main()
{
    fun(5,5.5);
}