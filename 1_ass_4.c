#include<stdio.h>

int main(){
    int mul=0,i,a,b;
    printf("Enter first and second number\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
        mul=mul+a;
    }
    printf("multiplication of %d and %d is %d",a,b,mul);
     return 0;
}