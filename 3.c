#include<stdio.h>

int main(){
        int i,n,sum=0;
        float avg;
        printf("Enter the number of elements\n");
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
         for(i=0;i<n;i++){
            sum+=a[i];
            avg=(float)sum/n;
        }
printf("sum is %d ",sum);
printf("average is %f ",avg);

    
     return 0;
}