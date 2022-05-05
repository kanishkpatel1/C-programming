#include<stdio.h>
int main(){
int i,j,k,c=0,num;
printf("Enter the number of elements\n");
scanf("%d",&num);
int a[num],b[num];
for(i=0;i<num;i++)
{
printf("Enter element %d:",i+1);
scanf("%d",&a[i]);
}
printf("array\n");
for(i=0;i<num;i++)
{
printf(" %d\t",a[i]);
}
for(i=0;i<num;i++)
{c=1;
if(a[i]!=-1)
{
for(j=i+1;j<num;j++)
{
if(a[i]==a[j])
{
c++;
a[j]=-1;
}
b[i]=c;
}
}


}
for(i=0;i<num;i++)
{
if(a[i]!=-1)
{
printf("\nfrequency of %d is %d\n",a[i],b[i]);
}
}


return 0;
}

