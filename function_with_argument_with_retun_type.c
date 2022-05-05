#include<stdio.h>
int sum(int ,int);
int main(){
    int x,y,c;
    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);

c=sum(x,y);
 printf("sum is =%d ",c);

}
int sum(int a,int b)
{
    int s=0;
    s=a+b;
   
    return s;
}