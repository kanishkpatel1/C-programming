#include<stdio.h>
int main(){
    int i,j,row,column,count=0;
int a[10][10],b[10][10];
printf("Enter the number of rows and columns\n");
scanf("%d%d",&row,&column);
printf("Enter table 1 :");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("Enter element [%d] [%d] : ",i,j);
        scanf("%d",&a[i][j]);
         }
    }
    printf("Enter table 2 :");
    for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("Enter element [%d] [%d] : ",i,j);
        scanf("%d",&b[i][j]);
         }
    }
    for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
    if(a[i][j]==b[i][j])
{
    count++;
}

         }
    }
  if(count>=90)  
  {
      printf("Player wins the game ");
  }   
        
return 0;
}