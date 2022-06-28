#include <iostream>
using namespace std;
class game
{
public:
    int no_of_league;
    void read1()
    {
        cout << "enter the no of league\n";
        cin >> no_of_league;
    }
    void display1()
    {
        cout << "no of league = " << no_of_league << endl;
    }
};
class futsal : virtual public game
{

public:
    int no_of_game1, no_of_player1;

    void read2()
    {
        cout << "enter the no of player in \n";
        cin >> no_of_player1;
        cout << "enter the no of game\n";
        cin >> no_of_game1;
    }
    void display2()
    {
        cout << "no of player in futsal::" << no_of_player1 << endl;
        cout << "no of game in futsal::" << no_of_game1 << endl;
    }
};
class cricket : virtual public game

{

public:
    int no_of_game2, no_of_player2;

    void read3()
    {
        cout << "enter the no of player in cricket \n";
        cin >> no_of_player2;
        cout << "enter the no of game\n";
        cin >> no_of_game2;
    }
    void display3()
    {
        cout << "no of player in cricket::" << no_of_player2 << endl;
        cout << "no of game in cricket::" << no_of_game2 << endl;
    }
};
class result : public cricket, public futsal
{
    float score1,score2;

public:
        void read()
    {
        read1();
        read2();
        read3();
    score1 =(no_of_player1+no_of_league)/no_of_game1;
    
     score2 =(no_of_player2+no_of_league)/no_of_game2;

    }
    void display()
    {
        display1();
        display2();
        display3();
       
        cout<<"result1= "<<score1<<endl;
        cout<<"result2= "<<score2<<endl;
    }
};
int main()

{
    result r;
    r.read();
    r.display();
}