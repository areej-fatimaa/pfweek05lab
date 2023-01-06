#include<iostream>
using namespace std;
int multiply(int number ,int res);
main()
{
 int number;
 int result;
 cout<<"enter number";
 cin>>number;
 result=multiply(number, res);
}
int multiply(int number, int res)
{
 res=number*5;
 return res;
}