//Multiplication table  of n 

#include<iostream>
using namespace std;
int main()
{
   int i,j,n;
   cout<<"i want the multiplication of ";
   cin>>n;
   cout<<"\n\t\t------------------------Table------------------------\n\n";
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=10;j++)
      {
          int mul = i*j;
          cout<<"\t"<<mul;
      }
      cout<<"\n";
  }
} 