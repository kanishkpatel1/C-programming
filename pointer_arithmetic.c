#include<stdio.h>

int main(){
    int a[4]={4,2,5,6};
int *p = &a[0];
     //p=p+1; for value of a[1]
printf("\nvalue is %d",*p);
// p++;
// ++p;
// printf("value is %d ",*p);   this is for checking
// we can update value by this type also

 *p=32;
printf("\nvalue is %d ",*p);


     return 0;
}