//return type with no argument
#include<stdio.h>
int fact(void);
void main(){
    int factorial;
    factorial=fact();
    printf("factorial of the given number is %d ",fact());
}
int fact(){
    int n,fact=1,i;
    printf("Enter the number to find factorial\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;

    }
    return fact;

}