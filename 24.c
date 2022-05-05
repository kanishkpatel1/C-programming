#include<stdio.h>

int main(){
int i,j,n,e,c=0;
int a[100];
printf("Enter the length of the array\n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter element :");
scanf("%d",&a[i]);
}
printf("Enter the element that you want to find\n");
scanf("%d",&e);
for(i=0;i<n;i++)
{
    if(a[i]==e){
        c++;
    }
}
printf("frequency of %d is %d",e,c);
     return 0;
}