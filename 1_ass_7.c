#include<stdio.h>

int main(){
    int i,n,armstrong,rem,start,end,sum;
    printf("Enter range from start to end\n");
  scanf("%d%d",&start,&end);
  for(i=start;i<=end;i++)
{
 n=i;
 sum=0;
 armstrong=n;
   while(n!=0)
   {
   rem=n%10;
   sum=sum+rem*rem*rem;
   n=n/10;
   }
if(sum==armstrong)
{
printf("%d\n",sum);
}
}
return 0; 
}