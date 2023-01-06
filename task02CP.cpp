#include<iostream>
using namespace std;
string letter(char alphabet );
main()
{
 char alphabet;
 string result;
 cout<<"enter alphabet";
 cin>>alphabet;
 result=letter(alphabet);
 cout<<result;
}
string letter(char alphabet)
 {
  string a;
  if(alphabet=='A')
 {
  a="you entered capital A";
 }
 if(alphabet=='a')
 {
  a="you have entered small A";
 }
 return a;
 }
 