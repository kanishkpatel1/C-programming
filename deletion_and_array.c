#include<stdio.h>

int main(){
    int i,j,element,n,position;
    int a[10];
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element and location\n");
    scanf("%d%d",&element,&position);
    if(position>n+1)
    {
        printf("deletion is not possible\n");
    }
    else{
        for(i=n-1;i>=position;i--){
            a[i+1]=a[i];
        }
        a[2]=element;
        for(i=0;i<n-1;i++)
        {
        printf("%d\t",a[i]);
        }
        a[]
    }

     return 0;
}