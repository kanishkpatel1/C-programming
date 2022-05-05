#include<stdio.h>
int main(){
    int year,start,end;
    printf("Enter range from start to end\n");
    scanf("%d%d",&start,&end);
    printf("leap year between %d and %d is:\n ",start,end);
    for(year=start;year<=end;year++)
    {  if(year%400==0||year%4==0){
            printf("%d\t",year);  } }
return 0;
}