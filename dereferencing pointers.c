#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    printf("the value of x is: %d\n",x);
    printf("the value of *ptr is: %d\n",*ptr);
    *ptr=20;
    printf("new of value:%d\n",*ptr);
    return 0;
}
