#include<stdio.h>

int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    //if we change value of r=50
    //then whole value of a becomes 50;
    //a=50;p=50;q=50;r=50;
    printf("%d %d %d %d",a,*p,**q,***r);
    //    %x for hexa decimal form
    // we can read address by both of the following method
    printf("\naddress of q is %x and %x ",q,&p);
   printf("\naddress of r is %x and %x ",r,& q);
    
     return 0;
}