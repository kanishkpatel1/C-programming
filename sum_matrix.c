#include<stdio.h>

int main(){
    int i,j,row,columns;
    int a[20][20],c[20][20],b[20][20];
    printf("Enter the number of row and columns\n");
    scanf("%d%d",&row,&columns);
    if(row==columns){
    printf("Enter element of 1st matrix :\n");
    for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
            printf("Enter element [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter element of 2nd matrix :\n");
     for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
            printf("Enter element [%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
      for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }
        for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
    else 
    printf("addition not possible");
     return 0;
}