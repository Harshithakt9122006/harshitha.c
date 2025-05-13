#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if (marks>=80)
    {
        printf("distinction",marks);
    }
    else if(marks>=65)
    {
        printf("first class",marks);
    }
    else if(marks>=45)
    {
        printf("second class",marks);
    }
    else if(marks<=30)
    {
        printf("fail",marks);
    }
    return 0;
}
