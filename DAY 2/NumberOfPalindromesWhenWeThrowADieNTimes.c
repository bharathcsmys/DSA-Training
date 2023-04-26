#include <stdio.h>

int isPalindrome(int num) {
   int reverseNum = 0, temp = num;
   while (temp > 0) {
      reverseNum = reverseNum * 10 + temp % 10;
      temp /= 10;
   }
   return (reverseNum == num);
}

int main() {
   int n, i, j, count = 0;
   printf("Enter the number of times the die is thrown: ");
   scanf("%d", &n);
   for (i = 1; i <= 6; i++) {
      for (j = 1; j <= 6; j++) {
         int num = i * 10 + j;
         if (n == 2) {
            count += isPalindrome(num);
         } else {
            int k;
            for (k = 1; k <= 6; k++) {
               int newNum = num * 10 + k;
               if (n == 3) {
                  count += isPalindrome(newNum);
               } else {
                  int l;
                  for (l = 1; l <= 6; l++) {
                     int newerNum = newNum * 10 + l;
                     if (n == 4) {
                        count += isPalindrome(newerNum);
                     }
                  }
               }
            }
         }
      }
   }
   printf("Number of palindromes: %d\n", count);
   return 0;
}
