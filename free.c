#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    int n;
    printf("Enterr value\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
    printf("unable to allocate memory\n ");
}
else
{
    printf("memory allocated");
    free(p);
}
     return 0;
}