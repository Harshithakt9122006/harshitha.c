#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter the two different values");
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
    printf("%d is largest\n",n1);
}
else if(n2>n1)
{
    printf("%d is largest",n2);
}
}
