#include<stdio.h>

int main(){
    int rem,rev,var,no,binary=0,i=1;
    printf("Enter the decimal number\n");
    scanf("%d",&no);
    var=no;
while(no!=0)
{
rem=no%2;
no=no/2;
binary=binary+(rem*i);
i=i*10;
}
printf("binary of %d is %d",var,binary);
     return 0;
} 