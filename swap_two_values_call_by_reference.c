#include<stdio.h>
void swap(int*,int*);
void main(){
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Value  of a =%d and b=%d before swap",a,b);
    swap(&a,&b);
     printf("\nValue  of a =%d and b=%d after swap",a,b);
}
void swap(int*x,int*y){
   int t;
   t=*x;
   *x=*y;
   *y=t;
}