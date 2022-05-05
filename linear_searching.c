#include<stdio.h>

int main(){
    int a[100],n,count=0,element,i;
    printf("Enter the number of  elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {    printf("Enter the value of element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the element that you want to find :");
    scanf("%d",&element);
     for(i=0;i<=n;i++)
     {
         if(a[i]==element)
         printf("Element found at position %d ",i+1);
         else 
        {
            count++;
        }
          if(count==1)
     {
         printf("element not found");
     }
     }
   
     return 0;
}