 #include<stdio.h>
 
 int main(){
     int i,j,n;
     printf("Enter the value of lines\n");
     scanf("%d",&n);
     int px=1,py =2*n-1;
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=2*n-1;j++)
         {
         if(j==px||j==py)
         printf("*");
         else
         printf(" ");
         }
         px++;
         py--;
       
     printf("\n");
     }
      
      return 0;
 }