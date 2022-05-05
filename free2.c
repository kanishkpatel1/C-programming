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
    for(int i=0;i<n;i++)
    {

    printf("\nEnter the value of element %d :",i);
    scanf("%d",&p[i]);
}
      for(int i=0;i<n;i++)
    printf("%d",p[i]);
    free(p);
    // yaha agar print kare to work nhi karega garbage dega
}
     return 0;
}