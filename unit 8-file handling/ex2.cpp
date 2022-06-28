#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch[80];
    fin.open("kusal.txt");
    fin.getline(ch,50);
    cout<<ch;
    fin.close();
}