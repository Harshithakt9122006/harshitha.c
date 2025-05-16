#include<stdio.h>
int i,num,isprime=1;
int main()
{
   printf("Enter the number starting from positive 2 ");
   scanf("%d",&num);
   for(i=2;i<=num/2;i++)
   {
       if(num%2==0)
       {
           printf("it is not a prime number\n");
       }
       else
       {
           printf("it is a prime number\n");
       }
   }
    return 0;
}
