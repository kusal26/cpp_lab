#include<iostream>
using namespace std;
class University
{
    public:
    string uni_name="Tribhuwan University";
    int uni_faculty=10;
    void uni_data();
};
void University::uni_data()
{
    cout<<"Name of University : "<<uni_name<<endl;
    cout<<"NO of faculty : "<<uni_faculty<<endl;

}
class gov_college:virtual public University
{
 public:
 string gov_name="ASCOL";
 int no_of_stut_gov=108;
void gov_data()
{
    cout<<"Government college : "<<gov_name<<endl;
    cout<<"No of student : "<<no_of_stut_gov<<endl;
}
};
class pri_college:virtual public University
{
    public:
    string pri_name="NIST";
    int no_of_stut_pri=77;
    void pri_data()
    {
        cout<<"private college : "<<pri_name<<endl;
    cout<<"No of student : "<<no_of_stut_pri<<endl;

    }
};
class result:public pri_college,public gov_college
{
    public:
    int total_student=no_of_stut_gov+no_of_stut_pri;
    void display()
    {
        uni_data();
        pri_data();
        gov_data();
        cout<<"Total student : "<<total_student<<endl;
    }
};
int main()
{
    result r;
    r.display();
    return 0;
}