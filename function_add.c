#include<stdio.h>
int add_numbers(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    int sum=add_numbers(a,b);
    printf("the sum is %d \n",sum);
    return 0;
}
