#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);
    if(a>0&&b>0)
    {
        printf("Both are positive");
    }
    else if(a>0&&b<0)
    {
        printf("At least one is positive");
    }
    else if(a<0&&b<0)
    {
        printf("Both are negative");
    }
}
