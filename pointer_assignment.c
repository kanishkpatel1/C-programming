#include<stdio.h>

int main(){
    float a=10.31247,b=12.12345;

    float *p,*q;
p=&a;
q=&b;
printf("%f %f ",*p,*q);
     return 0;
}