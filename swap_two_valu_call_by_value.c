#include<stdio.h>
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("\nvalues of a = %d and b=%d after swap ",a,b);
}
int main(){
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
     printf("values of a = %d and b=%d before swap ",a,b);
     swap(a,b);
     printf("\nnow value of a=%d and b=%d",a,b);
     return 0;
}