#include<stdio.h>
int main(){
int i,j,k,c=0,num;
printf("Enter the value of😴️ num\n");
scanf("%d",&num);
int a[num],b[num];
for(i=0;i<num;i++)
{
printf("Enter element 😍️ %d:",i+1);
scanf("%d",&a[i]);
}
printf("array beforeremoving duplicates:\n");
for(i=0;i<num;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<num;i++)
{
for(j=i+1;j<num;j++)
{
if(a[i]==a[j])
{
for(k=j;k<num;k++)
{
a[k]=a[k+1];
}

num--;
j--;
}
}
}
printf("array after removing duplicates:\n");
for(i=0;i<num;i++)
{
printf("%d ",a[i]);
}
return 0;
}
