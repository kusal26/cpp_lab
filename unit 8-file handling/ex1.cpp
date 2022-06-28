#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("kusal.txt");
    while (!fin.eof())
    {
        fin.get(ch);
        cout<<ch;

    }
    fin.close();

}