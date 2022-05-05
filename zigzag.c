#include<stdio.h>
int main(){
int i,j,k,c,row,column,temp=0;
printf("Enter the value of row and column\n");
scanf("%d%d",&row,&column);
int a[row][column];
for(i=0;i<row;i++)
{
for(j=0;j<column;j++){
    printf("Enter the value of [%d][%d] ",i,j);
scanf("%d",&a[i][j]);}
}
printf("before zigzag arrangement .............\n");
for(i=0;i<row;i++)
{
for(j=0;j<column;j++){
printf("%d",a[i][j]);}
printf("\n");
}printf("After zigzag arrangement .............\n");
for(i=0;i<row;i++)
{
for(j=0;j<column;j++){
if(i%2==1){
printf("%d",a[i][column-j-1]);
}
else{
printf("%d",a[i][j]);
}
}
printf("\n");
}

return 0;
}
