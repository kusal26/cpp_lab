#include<iostream>

using namespace std;
class teacher
{
    protected:
    int tid;
    string sub;
    public:
    void readt()
    {
        cout<<"enter id and subject\n";
        cin>>tid>>sub;
    }
    void displayt()
    {
        cout<<"Tid\tsubject\n";
        cout<<tid<<"\t"<<sub<<endl;
    }
};
class staff
{
    protected:
    int sid;
    string position;
    public:
    void reads()
    {
        cout<<"enter sid and position\n";
        cin>>sid>>position;
    }
    void displays()
    {
        cout<<"sid\tposition"<<endl;
        cout<<sid<<"\t"<<position<<endl;

    }
};
class coordinator:public teacher,public staff
{
    protected:
    string department;
    public:
    void reading()
    {
        readt();
        reads();
        cout<<"enter department\n";
        cin>>department;

    }
    void display()
    {
        displayt();
        displays();
        cout<<"department= ";
        cout<<department;

    }

};
int main()
{
    coordinator co;
    co.reading();
    co.display();
    
}