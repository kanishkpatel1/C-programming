#include<stdio.h>
#include<math.h>

int main(){
    float a[100];
    int i,n;
    float sum=0,sum1=0,mean,variance,standardvar;
    printf("Enter the length of array\n");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter elements %d: ",i+1);
    scanf("%f",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
mean=sum/n;
for(i=0;i<n;i++)
{
sum1=sum1+(mean-a[i])*(mean-a[i]);
}
variance=sum1/n;
standardvar=sqrt(variance);
//printf("mean is %f\t and variance is %f\t and standard variance is %f\f", mean,variance,standardvar);
printf(" standard variance is %f\f",standardvar);
return 0;
}