#include<stdio.h>
   struct Numbers{
       int a,b;
  };
   int main() {
          struct Numbers num;
          int Add,Sub;
       printf("Enter First number:");
       scanf("%d",&num.a);
       printf("Enter Second number:");
       scanf("%d",&num.b);
       Add=num.a+num.b;
       Sub=num.a-num.b;
       printf("Add=%d\n",Add);
       printf("Subtract=%d\n",Sub);
       return 0;
   }
