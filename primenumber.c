#include<stdio.h>

int main(){
     int a,n,i,k=0;
printf("Enter the number you want to check\n");
scanf("%d",&n);
for(i=1;i<=n;i++)

   if (n%i==0)
   { k++;}
if (k==2)
{
printf("prime\n");
}
else
printf("not prime\n");


    
     return 0;
}