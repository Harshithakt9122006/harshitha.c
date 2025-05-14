#include <stdio.h>
int main()
{
  int i,j,c=1,marks[3][3];
  printf("enter the marks of 3 students");
  for(i=0;i<3;i++)
       for(j=0;j<3;j++)
         scanf("%d",&marks[i][j]);
  for(i=0;i<3;i++){
      printf("\nmarks of student %d is ",c);
      for(j=0;j<3;j++)
          printf("%4d",marks[i][j]);
         c=c+1;
  }
  return 0;
}
