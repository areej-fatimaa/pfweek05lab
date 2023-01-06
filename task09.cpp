#include<iostream>
#include<cmath>
using namespace std;
float positiveQuadratic(int a ,int b ,int c);
float negativeQuadratic(int a ,int b ,int c);
main()
{ 
float a=5.0;
float b=6.0;
float c=1.0;
float pquad=positiveQuadratic(a , b , c);
cout<<"x="<<pquad;
float nquad=negativeQuadratic( a , b,c);
cout<<"x="<<nquad;
}
 float positiveQuadratic(int a ,int b ,int c)
{
 float bsquare;
 float pquad;
 float ac4;
 float a2;
 float squareroot;
 float sub;
 float divide;
 float quad;
 bsquare=pow(b,2);
 ac4=a*c*4;
 a2=a*2;
 sub=bsquare-ac4;
 squareroot=sqrt(sub);
 pquad=(-b+squareroot)/a2;
 return pquad;
}
float negativeQuadratic(int a ,int b ,int c)
{
 float bsquare;
 float nquad;
 float ac4;
 float a2;
 float squareroot;
 float sub;
 float divide;
 float quad;
 bsquare=pow(b,2);
 ac4=a*c*4;
 a2=a*2;
 sub=bsquare-ac4;
 squareroot=sqrt(sub);
 nquad=(-b-squareroot)/a2;
 return nquad;
}



 
 
 
 
