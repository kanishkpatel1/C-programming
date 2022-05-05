#include<stdio.h>

int main(){
int i,j,row,size,column,c=0;
printf("Enter the number of rows and columns\n");
scanf("%d%d",&row,&column);
int a[6][6],sum=0;
printf("Enter the elements of matrix1\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
{
    scanf("%d",&a[i][j]);
}
}
printf("diagonal elements of matrix is :\n");
 for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
{
if(i==j)
{
    printf("%d\t",a[i][j]);
    sum=sum+a[i][j];
} 
else {
    printf(" ");
}
}
printf("\n");
}
printf("sum of diagonal elements is %d",sum);
return 0;
}