//return type with argument

#include<stdio.h>
int fact(int );
void main(){
    int n,c;
    printf("Enter the number to find factorial\n");
    scanf("%d",&n);

c=fact(n);
printf("factorial of the number  is %d",c);
}
int fact(int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--){
    fact=fact*i;}
    return fact;
}