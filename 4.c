#include<stdio.h>

int main(){
    int a[100];
    int i,l=0,p=0,n,z=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter  elements %d: ",i+1);
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]<0)
    {
        l++;
    }
    else if (a[i]>0)
    {
        p++;
    }
    else if (a[i]==0)
    {
        z++;
    }
    }
    
    printf("total number of postive elemenst is %d\n",p);
    printf("total number of negative elemenst is %d\n",l);
    printf("total number of zero elemenst is %d\n",z);
     return 0;
}