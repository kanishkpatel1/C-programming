#include<stdio.h>
int main(){
    int i,j,row,column,count=0;
int a[10][10],b[10][10];
printf("Enter the number of rows and columns\n");
scanf("%d%d",&row,&column);
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
printf("Enter element [%d] [%d]",i,j);
scanf("%d",&a[i][j]);

    }
}
printf(" matrix before transpose is  :\n ");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<column;i++)
{
    for(j=0;j<row;j++)
    {
b[i][j]=a[j][i];
    }
}
printf("Transpose of a matrix is : \n");
for(i=0;i<column;i++)
{
    for(j=0;j<row;j++)
    {
printf("%d\t",a[j][i]);
    }
    printf("\n");
}
return 0;
}