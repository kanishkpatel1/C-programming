#include<stdio.h>
char fun();
void main()
{
char ch;
ch=fun();
printf("ch=%c",ch);
}
char fun(){
char a;
printf("Enter a character\n");
scanf("%c",&a);
return  a;
}