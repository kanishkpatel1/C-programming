#include<stdio.h>
 int main(){
int a[10],b[10],c[10];
int i,j=0,n,k=0,temp;
printf("Enter the value of numbers\n");
scanf("%d",&n);
 for(i=0;i<n;i++){
     printf("Enter the value of element %d : ",i+1);
     scanf("%d",&a[i]);
 }
  for(i=n-1;i>=0;i--){
     
     b[j]=a[i];
     j++;
    
 }
 printf("\nreverse array is :");
  for(i=0;i<j;i++){
     printf("%d ",b[i]);
  }
     return 0;
 }