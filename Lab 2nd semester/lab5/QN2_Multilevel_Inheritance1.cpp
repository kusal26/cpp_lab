#include <iostream>
using namespace std;
class student
{
    int roll_number;

public:
    void getdata(int x)
    {
        roll_number = x;
    }
    void display()
    {
        cout << "roll number = " << roll_number<<"\n";
    }
};
class test : public student
{
    int sub1,sub2;

public:
    void getdata1(int a, int b)
    {
        sub1 = a;
        sub2 = b;
    }
    int return_sub()
    {
        return sub1+sub2;
        
    }
};
class result : public test
{
    int total;
  
public:
    void display2()
    {
        total= return_sub();
        cout << "total result = " << total << endl;
    }
};
int main()
{
    result r;
    r.getdata(5);
    r.display();
    r.getdata1(10,55);
    r.display2();
    return 0;
}