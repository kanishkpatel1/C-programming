///////this is call by reference


#include<stdio.h>
int fun();
void main(){
    int x=5,y=2;
    fun(&x,&y);
    
    printf("\nIn main \n");
    printf("x=%d y=%d",x,y);
      
}
int fun(int* x,int* y){
*x=7,*y=5;
printf("in fun function\n");
printf("x=%d   y=%d",*x,*y);
}
// call by reference me main function totaly another functiom per depend karta hai