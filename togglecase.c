#include<stdio.h>
#include<string.h>
int main(){
   char a[100];
   int i;
   printf("Enter the string\n");
   gets(a);
   for(i=0;a[i]!='\0';i++){
       if(a[i]>='a'&&a[i]<='z'){
           a[i]-=32;
}
     else if(a[i]>='A'&&a[i]<='Z'){
           a[i]+=32;
}
   }
   printf("string after toggling case is :");
   puts(a);
     return 0;
}