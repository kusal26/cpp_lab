#include<iostream>
using namespace std;
class hour
{
    int hr;
    public:
    operator int()
    {
        int min;
        min=hr*60;
        return min;
    }
    void getdata()
    {
        cout<<"enter data\n";
        cin>>hr;
    }
};
int main()
{
    hour ob;
    int minute;
    ob.getdata();
    minute=ob;
    cout<<"minutte=="<<minute;
}