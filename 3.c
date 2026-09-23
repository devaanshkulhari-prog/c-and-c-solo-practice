#include<stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = a+b;
    int d = a-b;
    int e = a*b;
    float f = a/b;
    int g = a++;
    int h = a--;
    int i = ++a;
    int j = --a;

    printf("c=%d\n d=%d\n e=%d\n f=%f\n g=%d\n h=%d\n i=%d\n j=%d\n", c,d,e,f,g,h,i,j);
    return 0;
}