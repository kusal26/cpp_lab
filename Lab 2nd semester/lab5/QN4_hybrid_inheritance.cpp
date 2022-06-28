#include<iostream>
using namespace std;
class student
{
    string name;
    public:
    void get_name(string a)
    {
        name=a;
    }
    void display_name()
    {
        cout<<"My Name is "<<name<<"\n";
    }
    string return_name()
    {
        return name;
    }

};
class test:public student{
    int marks;
    public:
    
    void get_mark(int b)
    {
        marks=b;
    }
    void display_mark()
    {
        cout<<return_name()<<" scored "<<marks<<" in board exam\n";
    }

};
class sport{
    string sport;
    public:
    void get_sport(string c)
    {
        sport=c;
    }
    void display_sport()
    {
        cout<<"I likes "<<sport<<endl;
    }

};
class result: public test,public sport
{
    public:
    void display()
    {
        get_name("kusal");
        get_mark(60);
        get_sport("football");
        display_name();
        display_mark();
        display_sport();

    }

};
int main()
{
    result r;
    r.display();
    return 0;
}