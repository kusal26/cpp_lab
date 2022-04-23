/*
1. Write a program of single inheritance :
Base Class : B
              • Private member : a (int)
              • Public member: b (int)
Derived Class : D
              • Private member : c (int)
              Calculate c = a* b and display
a) public derivation
b) private derivation.
*/

#include<iostream>
using namespace std;
class base
{
  int a;
  public:
  int b;
  void getdata(int x,int y)
  {
  a=x;
  b=y;
  }
  int get_a()
  {
      return a;
  }
  void display1()
  {
  cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
  }
};
/*  
class derived:public base  //a.using public derivation
{
int c;
public:


void display()
{
    c=b*get_a();
    cout<<"c= "<<c;
}
};
int main()
{
 derived der;
 der.getdata(4,5);
 der.display1();
 der.display();
 return 0; 

}
*/

class derived:private base //using private derivation
{
int c;
public:


void display()
{
    getdata(4,5);
    display1();
    c=b*get_a();
    cout<<"c= "<<c;
}
};
int main()
{
 derived der;
 
 der.display();
 return 0; 

}
