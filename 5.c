#include<stdio.h>
int c(int n, int k);

int main()
{
        int n,k;
        printf("Enter n and k : ");
        scanf("%d%d",&n,&k);
        printf("\nBinomial coefficient\n",c(n,k));
        printf("%d\n",c(n,k));

        return 0;
}

int c(int n, int k)
{
        if(k==0 || k==n)
                return 1;
        return c(n-1,k-1) + c(n-1,k);
}
