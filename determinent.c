#include<stdio.h>
int main(){
    int i,j,determinent;
    int a[3][3];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter element [%d] [%d]",i,j);
        scanf("%d",&a[i][j]);
         }
    }
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        determinent=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))
        -a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))
        +a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
         }
    }
    printf("Determinent of the given matrix is %d\n",determinent);
return 0;
}