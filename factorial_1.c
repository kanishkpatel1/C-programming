
// C code for  function with no
//  arguments and no return value
  
#include <stdio.h>
void fact(void);
void main()
{
    fact();
}
void fact(void)
{
        int i,fact=1,n;
        printf("Enter the number to find factorial\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
}