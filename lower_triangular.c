#include<stdio.h>

int main(){
    int i,j,row,column;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&row,&column);
    int a[10][10];
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    { for(j=0;j<column;j++)
        {  scanf("%d",&a[i][j]); }     }
  printf("\nlower triangular is\n");
    for(i=0;i<row;i++)
    { printf("\n");
        for(j=0;j<column;j++)
        { if(i>j){
            printf("%2d",a[i][j]);  }
        else{ printf(" ");
 }
       }
    }
     return 0;
}