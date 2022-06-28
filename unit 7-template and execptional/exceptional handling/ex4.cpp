//Rethrowing an error
#include<iostream>
using namespace std;
void test(double x,double y)
{
    cout<<"inside funtion\n";
    try
    {
        if(y==0)
        {
            throw y;
        }
        else
        {
            cout<<"divide= "<<x/y;
        }
    }
    
    catch(double i)
    {
       cout<<"caught error in funtion"<<endl;
       throw i;//re-throwing error
    }
    cout<<"end of the funtion\n";
    
}
int main()
{
    try 
    {
        test(4,5);
        test(4,0);
    }
    catch(double)
    {
        cout<<"caught error in main funtion";
        }

        

}