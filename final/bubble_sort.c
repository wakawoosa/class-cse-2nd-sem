#include <stdio.h>

int main()
{
  int arr[] = {10,20,30,40,50};
  int i, j, temp;
  for(i = 0; i < 4; i++){
    for (j = 0; j < 4 - i ; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("the sorted array is: ");
  for (i = 0; i < 5; i++) {
    printf("%d ", arr[i]);  
  }
  return 0;
}
