#include<stdio.h>
int main(){
int i,j,row,column,rowsum,columnsum,temp=0;
printf("Enter the value of row and column\n");
scanf("%d%d",&row,&column);
int a[row][column];
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
    printf("Enter the value of [%d][%d]  :",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Matrix is .......................\n");
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<row;i++)
{    rowsum=0;
    for(j=0;j<column;j++)
    {
rowsum+=a[i][j];
    }
    printf("\n Sum of all the elements in row %d is %d ",i,rowsum);
}
for(i=0;i<row;i++)
{    columnsum=0;
    for(j=0;j<column;j++)
    {
columnsum+=a[j][i];
    }
    printf("\n Sum of all the elements in column %d is %d ",i,columnsum);
}
return 0;
}
