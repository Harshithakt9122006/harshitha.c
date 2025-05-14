#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for(int i=1; i <= n; i++) {
        fact = fact*i;
    }
    return fact;
}
int main() 
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a< 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        int result = factorial(a);
        printf("Factorial of %d is %d\n",a, result);
    }
return 0;
}
