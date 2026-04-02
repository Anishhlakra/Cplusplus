#include<iostream>
using namespace std;
int main()
{ //literals in data types.
     float d=34.4F;
     long double e=34.4L;
     cout<<"the size of 34.4 is:"<<sizeof(34.4)<<endl;
     cout<<"the size of 34.4F is:"<<sizeof(34.4F)<<endl;
     cout<<"the size of 34.4L is:"<<sizeof(34.4L)<<endl;
     cout<<"the size of 34.4l is:"<<sizeof(34.4l)<<endl;
     cout<<"the size of 34.4f is:"<<sizeof(34.4f)<<endl;
     return 0;
       // refrence variable.
         float x=455;
         float &y=x; // y is a reference variable to x.
         cout<<x<<endl;
         cout<<y<<endl;
         return 0;

        //typecasting in c++.
        int a=45;
        float b=45.46;
        cout<<"the value of a is :"<<(float)a<<endl;
        cout<<"the value of b is :"<<(int)b<<endl;
        return 0;
}
