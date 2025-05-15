#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("enterthe name");
    scanf("%s",&name);
    printf("%s\n",name);
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"lachu");
    printf("%s\n",name);
    int cmp= strcmp("harshi","harshitha");
    printf("%d\n",cmp);
    strcat(name,"coder");
    printf("%s\n",name);
    return 0;
}
