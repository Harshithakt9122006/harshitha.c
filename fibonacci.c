#include<stdio.h>
int main()
{
    int n,first=0,second=1,next,i,length;
    printf("enter the length to be generated:");
    scanf("%d",&length);
    for(i=1;i<=n;i++)
    { 
       printf("%d",first);
       next=first+second;
       first=second;
       second=next;
       printf("the fibonacci series:%d%d%d",first,second,next);
    }
    return 0;
}
