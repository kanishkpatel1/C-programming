#include<stdio.h>
int main(){
int i,j,element,index,position,num;
printf("Enter the length of the array \n");
scanf("%d",&num);

int a[num],b[num];

for(i=0;i<num;i++)
{
printf("Enter elements  %d:",i+1);
scanf("%d",&a[i]);
}
printf("array before insertion\n");
for(i=0;i<num;i++)
{
printf(" %d ",a[i]);
}
printf("\nEnter the element and postion of num\n");
scanf("%d%d",&element,&position);
index=position-1;
num++;
for(i=num-1;i>index;i--)
{
a[i]=a[i-1];
}
a[i]=element;
printf("array after insertion\n");
for(i=0;i<num;i++)
{
printf("%d ",a[i]);
}
return 0;
}
