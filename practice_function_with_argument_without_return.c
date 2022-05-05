#include<stdio.h>
void sum(int,float);
void main(){
float x,y;
printf("Enter the value of x and y\n");
scanf("%d%f",&x,&y);
sum(x,y);
// we can simply give value by sum(10.2,11.3)
// input kuch bhi de lekin out put fix ayega 5


}
void sum(int a,float b)
{
float s=0;
s=a+b;
// we can skip line of 11 and 12 and simply in line 15 printf("sum=%f",a+b);
printf("sum=%f",s);

}