#include<stdio.h>
void print(int a[][2],int m){
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
{
    printf("%d\t",a[i][j]);
}
printf("\n");
}
}
void main()
{
int s;

scanf("%d",&s);
int b[s][2];
        for(int i=0;i<s;i++)
    
        for(int j=0;j<2;j++)

    scanf("%d",&b[i][j]);

    print(b,s);
}