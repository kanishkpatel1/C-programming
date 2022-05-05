#include<stdio.h>
#include<string.h>

int main(){
int i;
    char a[30]="KANISHK";
    
for(i=0;a[i]!='\0';i++)
{
    // WITHOUT ASCII VALUES WE CAN SIMPLY PUT 'A' IN PLACE OF 65 AND 'Z' FOR 90
if(a[i]>=65&&a[i]<=90)
{
    a[i]=a[i]+32;
}
}
printf("%s",a);
     return 0;
}