#include<stdio.h>
#include<string.h>
int main(){
char a[30];
printf("Enter the string in upper case \n");
gets(a);
    strlwr(a);
printf("%s",a);
return 0; }