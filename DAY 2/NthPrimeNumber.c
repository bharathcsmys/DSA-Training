#include <stdio.h>

int isPrime(int num) {
   if (num <= 1) {
      return 0;
   }
   int i;
   for (i = 2; i * i <= num; i++) {
      if (num % i == 0) {
         return 0;
      }
   }
   return 1;
}

int main() {
   int n, count = 0, i = 2;
   printf("Enter the value of n: ");
   scanf("%d", &n);
   while (count < n) {
      if (isPrime(i)) {
         count++;
         if (count == n) {
            printf("%dth prime number is %d\n", n, i);
            break;
         }
      }
      i++;
   }
   return 0;
}
