#include<stdio.h>
int main(){
char a[100],b[100],c[100],d[100];
int dgt=0,alp=0,spc=0;
printf("Enter the string\n");
gets(a);
for(int i=0;a[i]!='\0';i++){
    if(a[i]>=65 && a[i]<=90|| a[i]>=97 && a[i]<=122)
    strcpy(b[i],a[i]);
    else if (a[i]>=48 && a[i]<=57)
     strcpy(c[i],a[i]);
    else
     strcpy(d[i],a[i]);
}
printf("alphabets :");
puts(b);
printf("digit :");
puts(c);
printf("special character  :");
puts(d);
    return 0;
}