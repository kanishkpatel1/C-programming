#include<stdio.h>

int main(){
    int a[5];
    int *p;
    p=a;
    for(int i=0;i<5;i++){
   // scanf("%d",(p+i));
scanf("%d",&a[i]);
    }
    printf("%d",*p);
     return 0;
}