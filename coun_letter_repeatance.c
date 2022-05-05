// this program check how many times a letter is repeated in the sentence input by user


#include<stdio.h>
int main(){
    int i,count=0;
    char c;
    char a[30];
    printf("Enter the sentence\n");
    gets(a);
    printf("Enter the character you want to check\n");
    scanf("%c",&c);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==c)
        {
            count++;
        }
    }
    printf("letter %c is repeated %d times",c,count);
    return 0;

}