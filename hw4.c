#include<stdio.h>

int main(){
    int i,j,k,n;
    printf("Enter the number of linesn");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        
        for(k=1;k<=n-i;k++)
        {
        printf(" ");
      }
        
        for(j=1;j<=i;j++)
        {
        printf("%d",j);
        }
        printf("\n");
     }
     return 0;
}



