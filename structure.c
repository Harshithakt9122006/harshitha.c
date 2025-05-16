#include<stdio.h>
   struct student
   {
       char name[50];
       int roll;
       float marks;
   };
   int main()
   {
       struct student s1;
       printf("enter name: ");
       scanf("%s",&s1.name);
       printf("enter roll:");
       scanf("%d",&s1.roll);
       printf("enter marks:");
       scanf("%f",&s1.marks);
   }
