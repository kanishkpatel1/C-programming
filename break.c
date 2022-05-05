#include<stdio.h>

int main(){
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            for(k=1;k<=4;k++)
            {
                for(l=1;l<=4;l++)

            if(i==j||j==k||k==i||i==l||k==l||j==l)
            continue;
            else
            printf("%d%d%d&d\n",i,j,k,l);
            }
        }
        
               
        }
    
    
 
     return 0;
}