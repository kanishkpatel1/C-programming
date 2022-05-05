#include<stdio.h>
int main(){
    int a[100],b[100],c[100];
    int i,j=0,k=0,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
for(i=0;i<n;i++)
{  printf("Enter elements %d: ",i+1);
    scanf("%d",&a[i]); }
for(i=0;i<n;i++) {
if(a[i]%2==0){
    b[j]=a[i];
    j++; }
else{  c[k]=a[i];
    k++; } }
printf("\nEven array: ");
for(i=0;i<j;i++)
{  printf("%d\t",b[i]); }
printf("\nodd array: ");
for(i=0;i<k;i++)
{ printf("%d\t",c[i]); }
return 0; }