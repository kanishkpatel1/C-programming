#include<stdio.h>

int main(){
    int i,n,c,a=0,b=1;
    printf("Enter the terms of series\n");
    scanf("%d",&n);
    printf("%d terms of fabonacci series is : ",n);
    for(i=1;i<=n;i++)
    {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
    }
return 0;
}