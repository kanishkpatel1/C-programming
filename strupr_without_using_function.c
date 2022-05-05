#include<stdio.h>
#include<string.h>

int main(){
int i;
    char a[30]="kanishk";
    
for(i=0;a[i]!='\0';i++)
{
    // WITHOUT ASCII VALUES WE CAN SIMPLY PUT 'a' IN PLACE OF 97 AND 'z' FOR 122
if(a[i]>=97&&a[i]<=122)
{
    a[i]=a[i]-32;
}
}
printf("%s",a);
     return 0;
}