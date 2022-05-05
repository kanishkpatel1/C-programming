#include<stdio.h>
int main(){
int n,i,j,sum=0,factorial=1;
printf("Enter the number of terms\n");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
{
for(j=1;j<=i;j++){
factorial=factorial*j;

}

sum=sum+factorial;
factorial=1;
}
printf("%d\n",sum);
return 0;
}
