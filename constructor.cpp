#include<iostream>
using namespace std;
/*class game
{
protected:
int no_of_game;
public:
game(int x)
{
    no_of_game=x;
    cout<<"game is initialized";
}

};
*/
class football
{
protected:
int no_of_players1;
public:
football(int y)
{
    no_of_players1=y;
    cout<<"football is initialized\n";
}
void fdisp()
{
    cout<<"no of player in football is "<<no_of_players1<<endl;
}
};
class volleyball
{
protected:
int no_of_players2;
public:
volleyball(int z)
{
    no_of_players2=z;
    cout<<"volleyball is initialized\n";
}
void vdisp()
{
    cout<<"no of player in volleyball is "<<no_of_players2<<endl;
}
};
class game:virtual public volleyball,public football
{
   protected:
   int num ;
   public:
   game(int a,int b,int c):volleyball(a),football(5)
   {
       num=c;
   }
   
   void gdisp()
{
    cout<<"no of player  is "<<num<<endl;
}
};
int main()
{
    game(5,44,8);

    return 0;
}