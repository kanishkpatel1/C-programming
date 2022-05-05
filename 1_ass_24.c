#include<stdio.h>
int main(){
int sum=0,num;
printf("Enter positive numbers for sum\n");
while(1)
 { scanf("%d",&num);
if(num<0)
{ break; }
sum=sum+num;}
printf("sum is %d",sum);
return 0; }

