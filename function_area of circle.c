#include <stdio.h>
#define pi 3.142
float area(float r){
    return pi*r*r;
}
int main() 
{
    float r;
    printf("Enter the radius:");
    scanf("%f",&r);
    float area_result=area(r);
    printf("area of circle is %f\n",area_result);
return 0;
}
