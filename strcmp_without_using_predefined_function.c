#include<stdio.h>
#include<string.h>

int main(){
int i,count=0;
    char a[30]="KANiSHK";
    char b[30]="KANiSHK";
    
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=b[i])
{
count=1;
}
}
if(count==0)
{
    printf(" equal ");

}
else
printf("Unequal");
     return 0;
}