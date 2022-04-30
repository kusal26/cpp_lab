#include<iostream>
using namespace std;
class alpha
{
 int a;
 public:
 alpha(int a)
 {
this->a=a;
cout<<"apha is initialized\n";
 }
 void display_alpha()
 {
     cout<<"values of alpha = "<<a<<endl;
 }

};
class beta
{
    int b;
    public:
    beta(int b)
 {
this->b=b;
cout<<"beta is initialized\n";
 }
 void display_beta()
 {
     cout<<"vlaues of beta = "<<b<<endl;
 }

};

class gamma: public alpha,public beta
{
    int c;
    public:
    gamma(int x, int y ,int c):alpha(x),beta(y)
    {
        this->c=c;
        cout<<"gamma is initialized\n";
    }
    void display_gamma ()
    {
    cout<<"values of c = "<<c;
    }


};
int main()
{
  gamma g(7,5,8);
  g.display_alpha();
  g.display_beta();
  g.display_gamma();

   
    

}