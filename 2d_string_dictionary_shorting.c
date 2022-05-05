#include<stdio.h>
#include<string.h>

int main(){
     int i,c,j,n,r;       
char a[4][100],t[100];
printf("Enter the number of names\n");
scanf("%d",&n);

fflush(stdin);
printf("Enter names\n");
for(i=0;i<=n;i++)
{
     gets(a[i]);
}
for(i=0;i<=n;i++)
{
     for(j=i+1;j<=n;j++)
     {
         if( strcmp(a[i],a[j])>0)
         {
              strcpy(t,a[i]);
              strcpy(a[i],a[j]);
              strcpy(a[j],t);
         }
 }
}
printf("strings in dictionary order\n");
for(i=0;i<=n;i++)
{
      printf("%s\n",a[i]);
     }


     return 0;
}
