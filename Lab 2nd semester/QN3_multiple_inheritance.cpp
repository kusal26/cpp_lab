
#include<iostream>
using namespace std;
class book
{
    string author,edition;
    int date;
    public:
    void getdata_book()
    {
        cout<<"enter author name : ";
        getline(cin,author);
        cout<<"enter edition : ";
        cin>>edition;
        cout<<"enter date : ";
        cin>>date;
    }
    void display_book()
    {
        cout<<"Author : "<<author<<"\n"<<"edition : "<<edition<<"\ndate : "<<date<<"\n";
    }


};
class voice_recording
{
    string speaker,recording_date;
    int duration;
    public:
    void getdata_voice_recording()
    {
        cin.ignore();
        cout<<"enter speaker name : ";
        getline(cin,speaker);
        cout<<"enter recording date : ";
        getline(cin,recording_date);
        cout<<"enter duration : ";
        cin>>duration;
    }
    void display_recording_book()
    
    {
        cout<<"speaker : "<<speaker<<"\nrecording dates : "<<recording_date<<"\nduration : "<<duration<<"\n";
    }


};
class talking_book:virtual public book, public voice_recording
{
    public:
    void display()
    {
        cout<<"*******BOOK********\n";
        getdata_book();
        display_book();
        cout<<"*******VOICE RECORDING*********\n";
        getdata_voice_recording();
        display_recording_book();

    }

};
int main()
{
    talking_book t;
    t.display();
    return 0;

}