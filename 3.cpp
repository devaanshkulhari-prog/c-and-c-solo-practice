#include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo = 606;
    int a = 4 , b= 6;
    float pi= 3.14;
    char c = 'd';
    bool is_true = false;
    cout<<::glo<<is_true;
    sum();
    return 0;
    
}