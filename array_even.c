#include <stdio.h>
int main()
{
  int arr[100],size,i;
  printf("enter the size of an array");
  scanf("%d",&size);
  printf("enter %d elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
      printf("even numbers in array are:\n");
      for(i=0;i<size;i++){
         if(arr[i]%2==0){
          printf("%d",arr[i]);
         }
  }
  printf("\n");
  return 0;
}
