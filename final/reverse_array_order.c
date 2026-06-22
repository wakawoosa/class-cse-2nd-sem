#include <stdio.h>

int main()
{
  int arr[] = {10,20,30,40,50};
  int i, j, temp, n = 5;
  for(i = 0; i < n/2; i++)
  {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  printf("Inversed array is: ");  
  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
