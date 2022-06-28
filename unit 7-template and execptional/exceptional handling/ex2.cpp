#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
 if((x-y)!=0)
 {
    int r=z/(x-y);
     cout<<"result="<<r;
    //cout<<"value of c ="<<c;
 }
 else
 throw (x-y);
}
int main()
{
    try
    {
        divide(10,20,500);
        //divide(10,10,500);
    }
    catch(int i)
    {
        cout<<"caught the exception\n";
        cout<<"catches="<<i;
    }
    
}