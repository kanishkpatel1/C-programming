#include<stdio.h>
#include<stdlib.h>
int main(){
int n, *p;
printf("Enter the number of elements\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
printf("Enter the value of element %d",i+1);
scanf("%d",&p[i]);
}
for(int i=0;i<n;i++)
printf("%d",p[i]);

return 0;

}