#include<stdio.h>
void print(int a[2][2]){
        for(int i=0;i<2;i++)
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

int b[2][2];
        for(int i=0;i<2;i++)
    
        for(int j=0;j<2;j++)

    scanf("%d",&b[i][j]);

    print(b);
}