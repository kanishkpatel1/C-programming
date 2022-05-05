#include<stdio.h>

int main(){
int i,j,row,column,c=0;
printf("Enter the number of row\n");
scanf("%d%d",&row,&column);
int a[5][5],b[5][5];
printf("Enter the elements of matrix1\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
{
    scanf("%d",&a[i][j]);
}
}
printf("Enter the value of second matrix\n");
 for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
{
    scanf("%d",&b[i][j]);
}
}
 for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
{
    if(a[i][j]!=b[i][j]){
        c=2;
    }
}}
if(c==0)
    printf("Matrix are identical\n");

else 
    printf("Matrix are not identical\n");
    
return 0;
}