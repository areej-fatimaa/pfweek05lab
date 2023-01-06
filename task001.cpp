#include<iostream>
#include<cmath>
using namespace std;
float calculateheight(float distance, float degree);
main()
{
 float base;
 float degrees;
 float height;
 cout<<"enter distance from the base";
 cin>>
}
float calculateheight(float distance, float degree)
{
  float radian;
  float radians;
  float angle;
  float height;
  radian=57.2958;
  radians=degree/radian;
  angle=tan(radians);
  height= angle*distance;
  return height;
}