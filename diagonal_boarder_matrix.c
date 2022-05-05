#include<stdio.h>
int main(){
int i,j,row,column;
printf("Enter the number of row and column\n");
scanf("%d%d",&row,&column);
int a[row][column];
for(i=0;i<row;i++)
{
for(j=0;j<column;j++){
    printf("Enter element [%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
}
printf("boundry elements of matrix :\n");
for(i=0;i<row;i++)
{
for(j=0;j<column;j++){
if(i==0||j==0||i==row-1||j==row-1){
printf("%d",a[i][j]);}
else {
printf(" ");}
}
printf("\n");
}
return 0;
}
