#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()

    {
        cout << "a::" << a << " " << "b::" << b << endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getdata(7, 8);

    c2.getdata(8, 4);
    c3 = c1 + c2;
    c3.showdata();
}