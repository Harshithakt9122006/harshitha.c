#include<stdio.h>
int main()
{
   int arr[10]={1,2,3,4,5},n=5,i;
   printf("reversed array\n");
   for(i=n-1;i>=0;--i)
   {
       printf("%d ",arr[i]);
   }
   return 0;
}
