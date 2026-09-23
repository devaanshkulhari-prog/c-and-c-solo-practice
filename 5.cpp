#include<iostream>
using namespace std;

int main(){
    int a = 67 , b = 45;
    cout<<"Operators in C++";
    cout<<"Following is the type of operators in C++";
    
    //arithmetic operators
    cout<<"following are the arithmetic operators"<<endl;
    cout<<"the value of a+b is:"<<a+b<<endl;
    cout<<"the value of a-b is:"<<a-b<<endl;
    cout<<"the value of a*b is:"<<a*b<<endl;
    cout<<"the value of a/b is:"<<a/b<<endl;
    cout<<"the value of a++ is:"<<a++<<endl;
    cout<<"the value of a-- is:"<<a--<<endl;
    cout<<"the value of ++a is:"<<++a<<endl;
    cout<<"the value of --a is:"<<--a<<endl; 

    //comparison operators
    cout<<"following are the comparison operators"<<endl;
    cout<<"the value of a==b is :"<<(a==b)<<endl;
    cout<<"the value of a<b is :"<<(a<b)<<endl;
    cout<<"the value of a>b is :"<<(a>b)<<endl;
    cout<<"the value of a<=b is :"<<(a<=b)<<endl;
    cout<<"the value of a>=b is :"<<(a>=b)<<endl;
    cout<<"the value of a!=b is :"<<(a!=b)<<endl;

    //reassign a and b
    a = 3 , b = 4;

    //logical operators
    cout<<"following are the logical operators"<<endl;
    cout<<"the value of logical and operator is:"<<((a==b) && (a<b))<<endl;
    cout<<"the value of logical or operator is:"<<((a==b) || (a<b))<<endl;
    cout<<"the value of logical not operator is:"<<(!(a<b))<<endl;

    return 0;
}