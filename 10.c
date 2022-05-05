#include <stdio.h>
#include <string.h>
int main()
{ char Str1[100],Str2[100];
char stri1[100],stri2[100];
int result, i;
printf("\n Please Enter the First String : ");
gets(Str1);
printf("\n Please Enter the Second String : ");
gets(Str2);
for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
if(Str1[i] < Str2[i])
{ printf("\n str1 is Less than str2");}
else if(Str1[i] > Str2[i])
 { printf("\n str2 is Less than str1");}
else
 { printf("\n str1 is Equal to str2");}
 printf("Enter string again to check without using pre defined function");
 printf("\nEnter string 1 :");
gets(stri1);
printf("\nEnter string 2 :");
gets(stri2);
if(strcmp(stri1,stri2)==0)
{ printf("The two strings are EQUAL!!!\n");}
else
 {printf("The two string are NOT EQUAL!!!\n");}
return 0;}