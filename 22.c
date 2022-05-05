#include<stdio.h>

int main(){
    int i,j,m,n;
    printf("Enter limit form m to n\n");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    { if(i%2==1){
        printf("%d ",i); } }
 return 0; }