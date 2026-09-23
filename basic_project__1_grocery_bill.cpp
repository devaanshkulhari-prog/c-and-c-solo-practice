#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float rice , flour , bazra , wheat , maida , dal;
    cout<<"the price of rice is :"<<setw(4)<<rice<<endl;
    cin>>rice;
    cout<<"the price of flour is :"<<setw(4)<<flour<<endl;
    cin>>flour;
    cout<<"the price of bazra is :"<<setw(4)<<bazra<<endl;
    cin>>bazra;
    cout<<"the price of wheat is :"<<setw(4)<<wheat<<endl;
    cin>>wheat;
    cout<<"the price of maida is :"<<setw(4)<<maida<<endl;
    cin>>maida;
    cout<<"the price of dal is :"<<setw(4)<<dal<<endl;
    cin>>dal;

    float total = rice + flour + bazra + wheat + maida + dal;
    cout<<"total price is :"<<total;
    return 0;
}