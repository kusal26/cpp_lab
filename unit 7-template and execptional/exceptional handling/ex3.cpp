//multiple excepional caught

//didnt understand do again
#include<iostream>
using namespace std;
void test(int x)
{
    try 
    {
        if(x==1)
        throw x;
        else if (x==2)
        throw x;
        else
        {
        
        throw x;

        }
    }
        catch(char a)
        {
            cout<<"cought an character\n";
    
        }
        catch (int b)
        {
            cout<<"caught an integer\n";

        }
        catch(float c)
        {
            cout<<"caught an float";
        }
    
}
int main()
{
    test('a');
    
}