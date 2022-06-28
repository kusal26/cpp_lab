#include<iostream>
using namespace std;
class grandfather
{
    protected:
    string car;
    int land;
    public:
    void grand_father_property(string a,int b)
    {
        car=a;
        land=b;
        
    }
    void display1()
    {
        cout<<"car= "<<car<<"\n"<<"land= "<<land<<endl;
    }

};
class father: public grandfather
{
    protected:
    string bike;
    public:
    void father_property(string c)
    {
        bike=c;
    }
    void display2()
    {
        cout<<"Father has "<<bike<<" bike"<<endl;
    }

};
class son : public father
{
    string car;
    public:
    void son_property(string d)
    {
        car=d;
    }
    void display3()
    {
        cout<<"son has "<<car<<" car"<<endl;
    }


};
class grandson : public son
{

};
int main()
{
    grandson g; 
    g.grand_father_property("nano",10);
    g.display1();
    g.father_property("yamaha");
    g.display2();
    g.son_property("ferari");
    g.display3();

}