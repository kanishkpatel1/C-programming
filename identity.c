#include<stdio.h>

int main(){
int i,j,row,column,c=1;
printf("Enter the number of row\n");
scanf("%d%d",&row,&column);
int a[5][5],b[5][5];
printf("Enter the elements of matrix\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
{
    scanf("%d",&a[i][j]);
}
}
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
 if(i=j&&a[i][j]!=1&&a[j][i]!=0)
    c++;
    break;
    }
}
if(c==1)
{
printf("identity matrix\n");
}
else{


    printf("not identity matrix\n");
}
return 0;
}