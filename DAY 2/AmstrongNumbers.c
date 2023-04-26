#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
   int sum = 0, temp = num, digits = 0;
   while (temp > 0) {
      digits++;
      temp /= 10;
   }
   temp = num;
   while (temp > 0) {
      int digit = temp % 10;
      sum += pow(digit, digits);
      temp /= 10;
   }
   return (sum == num);
}

int main() {
   int i;
   printf("Armstrong numbers between 1 and 1000:\n");
   for (i = 1; i <= 1000; i++) {
      if (isArmstrong(i)) {
         printf("%d\t", i);
      }
   }
   return 0;
}

