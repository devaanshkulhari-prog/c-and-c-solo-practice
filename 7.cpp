#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 9;
    // cout<<"the value of a was :"<<a;
    // a = 6 ;
    // cout<<"the value of a is :"<<a;

    //conatnts in C++
    // const int b = 45;
    // cout<<"the value of b was :"<<b;
    // b = 6;//you will get an error because of constant 
    // cout<<"the value of b is:"<<b;

    //manipulators in C++
    // int a =78,b=87,c=98880;
    // cout<<"the value of a is :"<<a<<endl;
    // cout<<"the value of b is :"<<b<<endl;
    // cout<<"the value of c is :"<<c<<endl;

    // cout<<"the value of a is :"<<setw(5)<<a<<endl;
    // cout<<"the value of b is :"<<setw(5)<<b<<endl;
    // cout<<"the value of c is :"<<setw(5)<<c<<endl;

    //operator precedense
    int a=65,b=34,c=4;
    int d = ((((5*b)+c)-a)*5);

    cout<<"the value of d is:"<<d;;

    return 0;

}