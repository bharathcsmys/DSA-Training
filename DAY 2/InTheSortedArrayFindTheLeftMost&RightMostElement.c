#include <stdio.h>

void sortArray(int arr[], int n) {
   int i, j, temp;
   for (i = 0; i < n-1; i++) {
      for (j = 0; j < n-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
}

int main() {
   int n, i;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   sortArray(arr, n);
   printf("Sorted array: ");
   for (i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   printf("\nLeftmost element: %d\n", arr[0]);
   printf("Rightmost element: %d\n", arr[n-1]);
   return 0;
}
