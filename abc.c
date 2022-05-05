#include<stdio.h>

int main(){
    int i,j,k,l,m,n;
    
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
         for(j=1;j<=i;j++)
       { printf("*");
        
    }

        for(k=1;k<=n-i;k++)
    {
        printf(" ");
    }
    for(m=1;m<=n-i;m++)
    {
        printf(" ");
    }
    for(l=1;l<=i;l++)
    {
        printf("*");
    }
      
    printf("\n");
    }

     return 0;
}