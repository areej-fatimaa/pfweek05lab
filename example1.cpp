#include<iostream>
using namespace std;
int isGreater(int number1, int number2);
main()
{
 int num1;
 int num2;
 int result;
 cout<<"enter number1";
 cin>>num1;
 cout<<"enter number2";
 cin>>num2;
 result=isGreater( num1, num2);
 cout<<result<<"is greator no"<<endl;
}
 int isGreater(int number1, int number2)
{ 
 if(number1>number2)
 {
  return number1;
 }
 if(number2>number1)
 {
  return number2;
 }
 return 0; 
}
 
 