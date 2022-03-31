#include<iostream>
using namespace std;
class game
{
  public:
  int no_of_league;
  void read1()
  {
      cout<<"enter the no of league : "<<endl;
      cin>>no_of_league;
  }
  void display1()
  {
      cout<<"no of league : "<<no_of_league<<endl;
  }
};
class football_club:virtual public game
{
    public:
    string name1;
    int no_of_players1,no_of_games1;
    void read2()
    {
         cout<<"enter the no of players1 and games1 : "<<endl;
      cin>>no_of_players1>>no_of_games1;
      cout<<"enter the club name\n";
      cin>>name1;
    }
    void display2()
    {
        cout<<"NO. of players1 : "<<no_of_players1<<"\n"<<"No of games1 : "<<no_of_games1<<endl;
        cout<<"club name1 : "<<name1;
    }
};
class cricket_club:virtual public game
{
    public:
     string name2;
    int no_of_players2,no_of_games2;
    void read3()
    {
         cout<<"enter the no of players2 and games2 : "<<endl;
      cin>>no_of_players2>>no_of_games2;
      cout<<"enter the club name\n";
      cin>>name2;
    }
    void display3()
    {
        cout<<"NO. of players2 : "<<no_of_players2<<"\n"<<"No of games2 : "<<no_of_games2<<endl;
        cout<<"club name2 : "<<name2;
    }


};

class medal:public cricket_club,public football_club
{
    public:
    float score1,score2;
    
    void display4()
    {
    read1();
    read2();
    read3();
    score1=(no_of_players1+no_of_league)/no_of_games1;
    cout<<"score1 : "<<score1<<endl;


    score2=(no_of_players2+no_of_league)/no_of_games2;

    cout<<"score2 : "<<score2<<endl;


    }

    
    
};
int main()
{
    medal m;
    m.display4();
    return 0;
}