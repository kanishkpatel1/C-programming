#include<stdio.h>
int main() {
int i,n;
printf("Enter the number of elements \n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++) {
printf("enter element %d:",i+1);
scanf("%d",&a[i]);  }
printf("Entered elements are : ");
for(i=0;i<n;i++) {
printf("%d ",a[i]);}
return 0;
}

