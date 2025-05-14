#include <stdio.h>
int large(int a,int b,int c){
    if (a>=b&&a>=c)
            return a;
    else if(b>=a&&b>=c)
            return b;
    else 
            return c;

}
int main() 
{
    int a,b,c;
    printf("Enterthree numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    int largest=large(a,b,c);
    printf("largest number is %d\n",largest);
return 0;
}
