#include<stdio.h>

int main(){
int i,j,k,row1,column1,row2,column2,sum;
printf("Enter the number of row1 and  column1\n");
scanf("%d%d",&row1,&column1);
printf("Enter the number of row2 and  column2\n");
scanf("%d%d",&row2,&column2);
int a[5][5],b[5][5],c[5][5];
printf("Enter the elements of matrix1\n");
if(column1==row2)
{
for(i=0;i<row1;i++)
{
    for(j=0;j<column1;j++)
{  printf("Enter element %d of %d ",i+1,j+1);
    scanf("%d",&a[i][j]);
}
}
printf("Enter the value of second matrix\n");
 for(i=0;i<row2;i++)
{
    for(j=0;j<column2;j++)
{  printf("Enter element %d of %d ",i+1,j+1);
    scanf("%d",&b[i][j]);
}
}

 for(i=0;i<row1;i++)
{
    for(j=0;j<column2;j++)
{
    
    for(k=0;k<row2;k++)
    {
sum=sum+(a[i][j]*b[i][j]);
}
c[i][j]=sum;
sum=0;
}
}
for(i=0;i<row1;i++)
{
    for(j=0;j<column2;j++)
{

    printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else{
    printf("multiplication not possible with the given column and matrix\n");
}


return 0;
}