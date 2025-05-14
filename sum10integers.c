#include <stdio.h>
int main()
{
  int num,i,sum=0;
  printf("enter 10 numbers");
  for(i=0;i<10;i++)
  {
    scanf("%d",&num);
    sum=sum+num;
  }
  printf("sum is %d\n",sum);
  return 0;
}
