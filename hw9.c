#include<stdio.h>

int main(){
    int space,i,j,n;
    
    printf("Enter the number of linen\n");
    scanf("%d",&n);
    for(i=n;i>=1;--i  ){
     
        for(space=0;space<n-i;++space)
        {
        printf(" ");
        }
        for(j=i;j<=2*i-1;++j)
         printf("*");

         for(j=0;j<i-1;++j)
         printf("*");
            

        
        printf("\n");
}
     
     return 0;
}