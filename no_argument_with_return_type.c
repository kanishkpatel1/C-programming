#include<stdio.h>
int sum(void);
void main(){
int s;
   s=sum();
   printf("The sum is %d",s);
}
int sum(){

    int a,b,sum;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
    //return a+b;  then we not need to iitialeze 
    printf("hii");  //it is not executed because it is after return 
}