#include<stdio.h>
#include<string.h>
int main(){
 char a[30];
    printf("Enter the string in lowercase\n");
    gets(a);
    strupr(a);
printf("%s",a);
 return 0; }