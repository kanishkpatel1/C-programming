#include<stdio.h>
int main()
{
int i,n;
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
printf("array aftre reverse\n");
for(i=n-1;i>=0;i--)
{
printf("%d\t",a[i]);
}
return 0;
}

