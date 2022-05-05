#include<stdio.h>

int main(){
    int d;
   int a[6]={1,2,3,4,5,6} ;
   int *p=&a[0];
   int *q=&a[2];
   //substaction   
      printf("the value of p is %d ",p-q);
    printf("\n the value of q is %d ",q+p);

     return 0;
}