#include<stdio.h>

int main(){
    int i,age,a=0,b=0,c=0;
    printf("Enter age of 15 persons\n");
    for(i=0;i<15;i++)
    {
      
        scanf("%d",&age);
        if(age>=0&&age<=5)
        a++;
        else if(age>=6&&age<=17)
        b++;
        else
        c++;
    }
    printf("%d is baby age\n",a);
    printf("%d is attending school\n",b);
    printf("%d is adult life\n",c);

     return 0;
}