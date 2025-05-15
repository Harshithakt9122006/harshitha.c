#include<stdio.h>
#include<math.h>
int main()
{
    int num,reminder,original,result;
    printf("enter an integer");
     scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        reminder=num%10;
        result=reminder*reminder*reminder;
        num/=10;
    }
    if (result=original)
    {
        printf("the number is amstrong number %d\n",original);
    }
    else
    {
        
        printf("the number is not a amstrong number %d\n",original);
    }
    return 0;
}
