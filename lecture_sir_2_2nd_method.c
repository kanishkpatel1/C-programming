#include<stdio.h>
int prime();
int prime(int n)
{
int  i,count=0;
    for(i=1;i<= n;i++)
    {
      if(n%i==0)
        {
            count++;
        }
        }
    if(count==2){
  return 1;
    }
    else
    {
return 2;
 }
}
int  main(){
        int n,result;
    printf("Enter the value of n\n");
scanf("%d",&n);
prime(n);
result=prime(n);
if(result==1)
{
printf("prime");
}
else{
    printf("not prime");
}
return 0;
}