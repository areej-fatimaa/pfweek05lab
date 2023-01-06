#include<iostream>
using namespace std;
main()
{
    int hour;
    int hours;
    int min;
    int mins;
    int result;
    cout<<"enter hour";
    cin>>hour;
    cout<<"enter min";
    cin>>min;
    if(min+15<59)
    {
    
    mins=min+15;
    hours=hour;
    cout<<"time after 15 min is"<<hours<<":"<<mins;
    }
 if(min+15>59)
{
    hours=hour+1;
    mins=(min+15)-60;
   cout<<"time after 15 min is"<<hours<<":"<<mins;
}
 if(hour>23)
{
hour =0;
mins=min;
hours=hour;
cout<<"time after 15 min is"<<hours<<":"<<mins;

}
}