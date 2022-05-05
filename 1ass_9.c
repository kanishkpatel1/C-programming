#include<stdio.h>

int main(){
    int input,p=0,n=0,z=0,sum=0;
    printf("Enter an interger");
    scanf("%d",&input);
  do
    {
        if(input>0)
        {
            p++;
            sum=sum+input;
        }
        else if(input<0){
            n++;
        }
else{
    z++;
}
printf("Enter next integer(-1 to quit)");
scanf("%d",&input);
    }while(input!=-1);
    n++;
    printf("total positive numbers is %d and sum of all is %d\n",p,sum);
    printf("total negative numbers is %d\n",n);
    printf("total zero numbers is %d ",z);
    return 0;
}