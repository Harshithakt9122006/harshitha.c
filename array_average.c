#include <stdio.h>
int main()
{
  int arr[100],n,i,size;
  float sum=0,average;
  printf("enter the number of elements");
  scanf("%d",&n);
  printf("enter %d elements:\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  average=sum/n;
      printf("%2f\n",average);
  return 0;
}
