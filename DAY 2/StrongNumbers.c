#include <stdio.h>

int factorial(int num) {
   int fact = 1;
   while (num > 1) {
      fact *= num;
      num--;
   }
   return fact;
}

int isStrong(int num) {
   int sum = 0, temp = num;
   while (temp > 0) {
      int digit = temp % 10;
      sum += factorial(digit);
      temp /= 10;
   }
   return (sum == num);
}

int main() {
   int i;
   printf("Strong numbers between 1 and 1000:\n");
   for (i = 1; i <= 1000; i++) {
      if (isStrong(i)) {
         printf("%d\t", i);
      }
   }
   return 0;
}
