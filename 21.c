#include<stdio.h>
    int main(){
        int n,i,rem,original,rev=0;
        printf("Enter the number that you want to check\n");
        scanf("%d",&n);
        original=n;
        while(n>0){
            rem=n%10;
            rev=rev*10+rem;
            n=n/10; }
            if(original==n){
            printf("palindrome");
            }
            else{
            printf("Not palindrome");
            }
     return 0;
}