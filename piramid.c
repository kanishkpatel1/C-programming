#include<stdio.h>

int main(){
    int i,j,k,l,m,n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=n-i;j++)
       { 
           printf(" ");
       }
       for(k=1; k<=2*i-1;k++)
       {
           printf("*");
             
       
            
       }
        for(l=n/2;l<=n;l++)
       { 
        
       
       for(m=1; m<=n-1;m++)
       {
           printf("*");

       }
       
    printf("\n");
    }
     return 0;
}