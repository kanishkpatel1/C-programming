#include<stdio.h>
int main()
{
int i,j,k,c,n;
printf("Enter the value of n\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter the value of element %d:",i+1);
scanf("%d",&a[i]);
}
printf("array before reverse\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
k=n;
while(k>=0)

{
for(j=0;j<k-1;j++)
{
c=a[j];
a[j]=a[j+1];
a[j+1]=c;
}
k--;
}
printf("\narray aftre reverse\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}

