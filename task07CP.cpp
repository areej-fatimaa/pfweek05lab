#include<iostream>
using namespace std;
float pipeone( float flowRate1, float hour);
float pipetwo(float flowRate2,  float hour);
float overflow(float volumeOfPool,float filled);
float filled;
float flowRate1;
float flowRate2;
float volumeOfPool;
float volume;
main()
{
    float hour; 
    float result1;
    float result2;
    float result3;
    float pipe1;
    float pipe2;

    cout<<"volume of pool";
    cin>>volumeOfPool;
    cout<<"flow Rate of pipe 1";
    cin>>flowRate1;
    cout<<"flow rate of pipe 2 ";
    cin>>flowRate2;
    cout<<"enter hours";
    cin>>hour;
    result1=pipeone (flowRate1,hour);
    result2=pipetwo(flowRate2,  hour);
    float totalfilled;
    filled=result1+result2;
    totalfilled=filled/volumeOfPool;
    float perfilled;
    perfilled=totalfilled*100;
    cout<<"the pool is filled  "<<perfilled<<"%"<<endl;
     pipe1= result1/filled*100;
     cout<<"Pipe1:"<<pipe1<<"%  ";
     pipe2=result2/filled*100;
     cout<<"Pipe2:"<<pipe2<<"%"<<endl;
     result3=overflow(volumeOfPool,filled);
     cout<<"for "<<hour<<"pool overflows with"<<volume<<"litters";
}
 float pipeone( float flowRate1, float hour)
{
   float flow_1;
    float perflow1;
    flow_1=flowRate1*hour;
    return flow_1;

}
float pipetwo(float flowRate2,  float hour)
{
    float flow_2;
    float perflow2;
    flow_2=flowRate2*hour;
    return flow_2;
}
float overflow(float volumeOfPool, float filled)
{
    if(filled>volumeOfPool)
    { 
      volume=filled-volumeOfPool;
      return volume;

    }
}