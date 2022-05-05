#include<stdio.h>
int main(){

   int a,b,c;
   printf("Enter marks of student 1 : ");
   scanf("%d",&a);
      printf("Enter marks of student 2 : ");
   scanf("%d",&b);
      printf("Enter marks of student 3 : ");
   scanf("%d",&c);
   (a<b&&b<c)?printf("student 1 scored the least mark %d",a):
   (b<a&&b<c)?printf("student 2 scored the least mark %d",b):
   printf("student 3 scored least mark %d",c);
   return 0;
}