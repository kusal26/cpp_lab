#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("nepal.txt");
    while (fout)
    {
        getline(cin,line);
        if(line=="-1")
        break;
        fout<<line<<endl;
    
    }
    ifstream fin;
    fin.open("nepal.txt");
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        cout<<ch;
    }
    fout.close();


}