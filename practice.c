#include<stdio.h>


void sub(){
int a,b,sub;
printf("Enter the value of a and b for subtract\n");
scanf("%d%d",&a,&b);
sub=a-b;
printf("subtraction of a and b is %d\n",sub);

}
void sum(){
int a,b,sum,c;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("Sum of a and b is %d \n",sum);
sub();
}

void name(){
printf("Kanishk\n");
}


void main(){
name();
printf("patel\n");
sum();
}