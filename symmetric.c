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
b[j][i]=a[i][j];
}
}
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
 if(a[i][j]!=b[i][j])
    c++;
    break;
    }
}
if(c==1)
{
printf("symmetric\n");
}
else{


    printf("not symmetric\n");
}
return 0;
}