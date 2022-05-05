#include<stdio.h>

int main(){
    int i,j,k,l,m,n=4;
    char ch='A';
    
    // printf("Enter the number of lines\n");
    // scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
         for(j=1;j<=i;j++)
       { printf("%c",ch);
       ch++;
        
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
        printf("%c",ch);
        ch++;
    }
    
       printf("\n");
    }

     return 0;
}