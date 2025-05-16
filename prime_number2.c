#include<stdio.h>
#include<math.h>
int main()
{
   int num,isprime=1,i;
   printf("enter the value starting from positive 2:");
   scanf("%d",&num);
   if(num<=1){
       isprime=0;
   }
   else
   {
       int limit=(int)sqrt(num);
       for(i=2;i<=limit;i++){
           if(num%1==0){
               isprime=0;{
           }
           }
       }
       if(isprime){
           printf("it is a prime\n");
       }
       else
       {
           printf("it is not a prime\n");
       }
   return 0;
}
}
