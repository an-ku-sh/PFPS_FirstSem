/*
WAP to print Full Pyramid of Numbers
    1  
  2 3 2 
 3 4 5 4 3 
4 5 6 7 6 5 4*/

#include <stdio.h>
int main() {
   int i, space, k = 0, count = 0, count1 = 0;
   for (i = 1; i <= 4; ++i) {
      for (space = 1; space <= 4 - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= 4 - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
}