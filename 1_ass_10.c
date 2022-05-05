#include<stdio.h>
#include<math.h>

int main(){
    float i;
    float r;
    char ch;
    printf("-----------------------------------------");
    printf("\nAngle                Sin\t       \tCos\t\n");
    
    for(i=0;i<=360;i=i+30.4)
    {
        r=i*3.14159/180;
        printf("\n%f\t   %f\t  %f\t\n",i,sin(r),cos(r));
    }
        printf("-----------------------------------------");

     return 0;
}