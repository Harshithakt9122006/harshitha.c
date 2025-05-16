#include<stdio.h>
   struct Student{
       char name[50];
       int marks;
   };
   int main(){
       struct Student s1,s2,s3;
       float average;
       printf("Enter marks of student 1:");
       scanf("%d",&s1.marks);
       printf("Enter marks of student 2:");
       scanf("%d",&s2.marks);
       printf("Enter marks of student 3:");
       scanf("%d",&s3.marks);
       average=(s1.marks+s2.marks+s3.marks)/3.0;
       printf("Average marks=%.2f\n",average);
       return 0;
   }average
