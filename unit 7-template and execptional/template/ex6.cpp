#include<iostream>
using namespace std;
template<class t>
void fun(t x)
{
    cout<<"\ntemplate display\n"<<" "<<x;
}
void fun(int x)
{
    cout<<"normal display"<<" "<<x;

}
int main()
{
    fun(5);
    fun(2.6);
    fun('z');
    fun("kusal");
}