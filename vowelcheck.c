#include<stdio.h>
int main(){
    char a;
    printf("Enter the character you want to check\n");
    scanf("%c",&a);
    if(a=='A'||a=='a'||a=='e'||a=='E'||a=='I'||a=='i'||a=='o'||a=='O'||a=='u'||a=='U')
    printf("vowel");
    else
    printf("consonent");
return 0; }