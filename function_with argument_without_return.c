#include<stdio.h>
void sum(float,float);
void main(){
float x,y;
printf("Enter the value of x and y\n");
scanf("%f%f",&x,&y);
 sum(x,y);
// we can simply give value by sum(10.2,11.3)
// input kuch bhi de lekin out put fix ayega dono ka sum 
}
void sum(float x,float y)
{ 
    float s=0;
s=x+y;
// // we can skip line of 13 and 14 and simply in line 16 printf("sum=%f",a+b);
 printf("sum=%f",s);

 }
