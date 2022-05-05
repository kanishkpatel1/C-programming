#include<stdio.h>

int main(){
    int a[5];
    int *p;
    p=a;
    for(int i=0;i<5;i++)
     scanf("%d",(p+i));
    printf("%d",*p+2);
     return 0;
}