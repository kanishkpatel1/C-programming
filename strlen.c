#include<stdio.h>
#include<string.h>
int main(){
int count=0;
char a[30];
printf("Enter name\n");
gets(a);
puts(a);
count=strlen(a);
printf(" length of the string is %d",count);
return 0;
}

