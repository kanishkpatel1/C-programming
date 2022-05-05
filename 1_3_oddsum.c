#include<stdio.h>

int main(){
    int i,start,end,count=0,sum=0;
    float avg;
    printf("Enter range from start to end\n");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        if(i%2!=0){
    sum=sum+i;
    count++;
    }
    }
avg=(float)sum/count;
printf("sum is %d and avg is %f",sum,avg);
     return 0;
}