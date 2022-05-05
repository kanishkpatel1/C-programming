// this program chech how many vowels  and consonents are present in the sentence input by user

#include<stdio.h>
int main(){
    int i,count=0,cs=0;
    char a[30];
    printf("Enter the string\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
       
if(a[i]=='A'||a[i]=='a'||a[i]=='e'||a[i]=='E'||a[i]=='I'||a[i]=='i'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
    {
        count++;
    }
    else {
        cs++;
    }
    }
    
printf(" total vowels is %d and consonents is %d",count,cs++);
return 0;

}