#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a,b and c");
scanf("%d%d%d",&a,&b,&c);
    if(a<b&&b<c)
    {
       printf("a is smallest");
    }
    else if(b<a&&b<c)
    {
        printf("b is smallest");
    }
    else
    {
        printf("c is smallest");
    }
}
