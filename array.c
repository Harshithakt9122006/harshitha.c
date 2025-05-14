#include<stdio.h>
int row,column;
int a[2][3]={
    {1,2,3},
    {4,5,6}
};
int main()
{
    for(row=0;row<2;row++)
    for(column=0;column<3;column++){ 
        printf("%d\n",a[row][column]);
    }
}
