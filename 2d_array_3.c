#include<stdio.h>
void print(int m,int n, int a[m][n]){  //yaha column dena complusory hai
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
{
    printf("%d\t",a[i][j]);
}
printf("\n");
}
}
void main()
{
int s,y;

scanf("%d%d",&s,&y);
int b[s][y];
        for(int i=0;i<s;i++)
    
        for(int j=0;j<y;j++)

    scanf("%d",&b[i][j]);

    print(s,y,b);
}