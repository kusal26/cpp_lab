#include<iostream>
using namespace std;
class lecture
{
  int id;
  string name;
  public:
  void readdata()
  {
      cout<<"enter your id\n";
      cin>>id;
      cout<<"enter your name\n";
      cin>>name;
  }
  void printdata()
  {
      cout<<"id ="<<id<<endl;
      cout<<"name= "<<name<<endl;
  }
};
class parttime:public lecture
{
    float payperhr;
    public:
    void readdata()
    {
        cout<<"enter your rate per hour\n";
        cin>>payperhr;
    }
    void printdata()
    {
        cout<<"payperhour="<<payperhr<<endl;
    }

};
class fulltime:public lecture
{
    float paypermonth;
    public:
    void readdata()
    {
       
        cout<<"enter your rate per month\n";
        cin>>paypermonth;
    }
    void printdata()
    {
        cout<<"paypermonth="<<paypermonth<<endl;
    }

};
int main()
{
    
    parttime pt;
    fulltime ft;
    pt.readdata();
    pt.printdata();
    ft.readdata();
    ft.printdata();
}