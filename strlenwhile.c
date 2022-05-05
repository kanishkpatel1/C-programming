#include<stdio.h>
#include<string.h>
int main(){
int count=0,i=0;
char a[30];
char b[30];
printf("Enter the value of a\n");
gets(a);
while(a[i]!='\0')
{
count++;
i++;
}

printf(" length is %d",count);
return 0;
}

