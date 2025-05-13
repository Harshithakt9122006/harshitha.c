#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num>0)
    {
        printf("the number is positive %d",num);
    }
    else if(num<0)
    {
        printf("the number is negative",num);
    }
    else if(num==0)
    {
        printf("the number is equal to zero");
    }
}
