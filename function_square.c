#include<stdio.h>
int square_number(int num)
{
    return num*num;
}
int main()
{
    int a,result;
    printf("enter a number");
    scanf("%d",&a);
    result=square_number(a);
    printf("the square of number %d is %d \n",a,result);
    return 0;
}
