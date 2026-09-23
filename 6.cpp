#include<iostream>
using namespace std;

int c = 45;

int main(){
/****************build in data types ***********/
int a , b ,c;
cout<<"the value of a "<<endl;
cin>>a;
cout<<"the value of a "<<endl;
cin>>b;
c=a+b;

cout<<"the sum is :"<<c<<endl;
cout<<"the global c is :"<<::c<<endl;

/*************float , double , long double literals***********/
float d=34.4f;
long double e=34.4l;
cout<<"the size of 34.4 is :"<<sizeof (34.4)<<endl;
cout<<"the size of 34.4f is :"<<sizeof (34.4f)<<endl;
cout<<"the size of 34.4F is :"<<sizeof (34.4F)<<endl;
cout<<"the size of 34.4l is :"<<sizeof (34.4l)<<endl;
cout<<"the size of 34.4L is :"<<sizeof (34.4L)<<endl;

/************reference variables************/
int x = 100;
int & y=x;
cout<<"the value of x is :"<<y<<endl;

/***************typecasting************/
int g = 45;
float h = 46.78;
cout<<"the value of g is:"<<float(g)<<endl;
cout<<"the value of g is:"<<(float)g<<endl;

cout<<"the value of h is:"<<int(h)<<endl;
cout<<"the value of h is:"<<(int)h<<endl;

cout<<"the expression is :"<<g+int(h)<<endl;

return 0;
}