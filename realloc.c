#include<stdio.h>
#include<stdlib.h>
int main(){
int n,a ,*p;
printf("Enter the number of elements\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
{
printf("Enter the value of element %d :",i+1);
scanf("%d",&p[i]);
}
for(int i=0;i<n;i++)

printf("%d\t",p[i]);

printf("\nEnter new size :");
scanf("%d",&a);
p=realloc(p,a*sizeof(int));
for(int i=n;i<a;i++)
{
printf("Enter element %d :",i+1);
scanf("%d",&p[i]);
}
for(int i=0;i<a;i++)
printf("%d\t",p[i]);
return 0;
}