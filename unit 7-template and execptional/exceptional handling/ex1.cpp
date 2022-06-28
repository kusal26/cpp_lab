#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    c=a-b;
    try
    {
        if(c!=0)
        {
            cout<<"value of c ::"<<c;
        }
        else
        {
            throw c;
        }
    }
    catch(int d)
    {
        cout<<"catches : "<<d;
    }
    
}
