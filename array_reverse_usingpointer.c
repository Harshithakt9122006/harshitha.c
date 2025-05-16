#include<stdio.h>
int main()
{
   int arr[10]={1,2,3,4},n=4,i;
   int *start,*end,temp;
   start=arr;
   end=arr+n-1;
   while(start<end)
   {
       temp=*start;
       *start=*end;
       *end=temp;
       start++;
       end--;
   }
   printf("reversed array:");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   return 0;
}
