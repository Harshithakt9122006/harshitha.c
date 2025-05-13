
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    if (a>0||b>0)
    {
        sum=a+b;
        printf("sum=%d\n",sum);
    }
    else
    {
        printf("both are non positive");
    }

}
