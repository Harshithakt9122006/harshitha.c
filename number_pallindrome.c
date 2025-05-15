#include<stdio.h>
int main()
{
    int num,reversed=0,reminder,original;
    printf("enter an integer");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        reminder=num%10;
        reversed=reversed*10+reminder;
        num/=10;
    }
    if (original==reversed)
    {
        printf("the number is pallindrome");
    }
    else
    {
        
        printf("the number is not a pallindrome");
    }
    return 0;
}
