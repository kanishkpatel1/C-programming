#include<stdio.h>
#include<string.h>
int main(){
int count=0;
char a[30];
char b[30];
printf("Enter the value of a\n");
gets(a);
printf("Enter the value of b\n");
gets(b);
strncat(a,b,3);

printf("%s",a);
return 0;
}

