///////this is call by value 


#include<stdio.h>
int sum(int w,int x);
// here we can use any type of float like foloat q,float r but float is
//beacuse yeh match hona chaiye 
void main(){
    int a=5,b=2;
       sum(a,b);
       printf("inside main\n");
    printf("a=%d  ,b=%d",a,b);
 
    
    //yaha sum ke function ke ander wohi value likhenge jo uper initialize ki ho or any integer like sum(2,3)
    // it will give error 
}
int sum(int x,int y){
int a,b;
printf(" inside sum   Enter the value of a and b\n");
scanf("%d%d",&a,&b);
printf("Sum of a and b is %d",a+b);
}