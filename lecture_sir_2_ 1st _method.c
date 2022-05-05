#include <stdio.h>
void prime();
void prime(int n)
{

    int i, count = 0;
    for (i = 1; i < n; i++)
    {

        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 1)
        printf("prime\n");
    else
    {
        printf("not prime\n");
    }
}

void main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    prime(n);
}