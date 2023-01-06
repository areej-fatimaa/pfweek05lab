#include<iostream>
using namespace std;
int multiply(int number ,int result);
main()
{
 int number;
 int result;
 cout<<"enter number";
 cin>>number;
 result=multiply(number, result);
 cout<<result;
}
int multiply(int number, int result)
{
 result=number*5;
 return result;
}