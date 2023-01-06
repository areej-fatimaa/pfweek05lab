#include<iostream>
using namespace std;
string EO(int number);
main()
{ 
 int number;
 string result;
 cout<<"enter number";
 cin>>number;
 result=EO(number);
 cout<<result;
}
 string EO(int number)
{
 int no1;
 int rem1;
 int no2;
 int rem2;
 int no3;
 int rem3;
 int no4;
 int rem4;
 int total;
 int result;
 string a;
 no1=number/10000;
 rem1=number%10000;
 no2=rem1/1000;
 rem2=rem1%1000;
 no3=rem2/100;
 rem3=rem2%100;
 no4=rem3/10;
 rem4=rem3%10;
 total=no1+no2+no3+no4+rem4;
 result=total%2;
 if(result==1)
{ 
a= "oddish";
 return a;
}
if(result==0)
{
 a="evenish";
 return a;
 }
 }

 
 
 
 
 
 
 
 