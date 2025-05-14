#include<stdio.h>
int main()
{
 int c=1,n,i;
 printf("Enter the value of n \n");
 scanf("%d",&n);
 if(n==0)
 {
     printf("1");
 }
 else
 {
      for(i=1;i<=n;i++)
      {
          c=c*i;
      }
     printf("%d",c);
 } 
}
