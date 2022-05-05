//no return type with argument
#include<stdio.h>
void fact(int );
void main(){
    int n;
    printf("Enter the number to find factorial\n");
    scanf("%d",&n);

fact(n);
}
void fact(int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--){
    fact=fact*i;}
    printf("factorial of %d is %d",n,fact);
}