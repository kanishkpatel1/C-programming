#include<stdio.h>
float sum();
void main(){

    sum();
}
float sum(){
float a,b,c,d;
printf("Enter the value of a and b\n");
scanf("%f%f",&a,&b);
printf("Sum of a and b is %f",a+b);
}