#include<stdio.h>
int main()
{
    int a=10;
    int*ptr;
    ptr=&a;
    printf("adress of a:%p\n",ptr);
    printf("value of:%d\n",*ptr);
}
