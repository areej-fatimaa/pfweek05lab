#include<iostream>
#include<cmath>
using namespace std;
bool symmetrical(int number1);
main()
{
 int number1;
 cout<<"enter number1";
 cin>>number1;
 bool result; 
 result=symmetrical(number1);
 cout<<result;
}
 bool symmetrical(int number1)
{
 int no1;
 int rem1;
 int no2;
 int no3;
 no1=number1/100;
 rem1=number1%100;
 no2=rem1/10;
 no3=rem1%10;
 if(no1==no3)
  {
   return no1;
 }
 return 0;
}

  
