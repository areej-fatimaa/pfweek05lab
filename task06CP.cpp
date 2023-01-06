#include<iostream>
using namespace std;
string convertNum(int no1);
string convertNum2( int no2);
main()
{
    int number;
    string result;
    int no1;
    int no2;
    cout<<"enter number";
    cin>>number;
    no1=number/10;
    no2=number%10;
    result=convertNum( no1);
    cout<<result;
    result=convertNum2( no2);
    cout<<result;

}
string convertNum(int no1)
{
      string str;

if(no1==2)
{
    str="twenty";
}
if(no1==3)
{
    str="thirty";
}
if(no1==4)
{ 
    str="fourty";
}
if(no1==5)
{ 
    str="fifty";
}
if(no1==6)
{
    str="sixty";
}
if(no1==7)
{
    str="seventy";
}
if(no1==8)
{
    str=="eighty";
}
if(no1==9)
{
    str="ninty";
}
 return str;
}
string convertNum2( int no2)
{
     string str;
    if(no2==1)
    {
    str="one";
    }
 if(no2==2)
    {
    str="two";
    }
     if(no2==3)
    {
    str="three";
    }
     if(no2==4)
    {
    str="four";
    }
     if(no2==5)
    {
    str="five";
    }
     if(no2==6)
    {
    str="six";
    }
     if(no2==7)
    {
    str="seven";
    }
     if(no2==8)
    {
    str="eight";
    }
     if(no2==9)
    {
    str="nine";
    }
    return str;
}