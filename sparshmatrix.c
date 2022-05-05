#include<stdio.h>
int main(){
    int i,j,row,column,count=0;
int a[10][10];
printf("Enter the number of rows and columns\n");
scanf("%d%d",&row,&column);
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("Enter element [%d] [%d]",i,j);
        scanf("%d",&a[i][j]);
        if(a[i][j]==0){
            count++;
        }
         }
    }
        if(count>(row*column)/2)
        {
    printf("The given matrix is sparsh matrix\n");
}
else
{
    printf("The matrix is dense");
}
return 0;
}