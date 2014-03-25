#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct Number {
   long num;
   int true; // true = prime/unchecked, false = non-prime
} Number;

int main() {
   long max, i, j, mult = 1;
   int print;
   Number *list;
   clock_t begin, end;
   double time;

   printf("Enter a max number: ");
   scanf("%ld", &max);
   printf("Do you want to print the output? (1 = yes, 0 = no): ");
   scanf("%d", &print);

   list = malloc(sizeof(Number) * max);

   for(i = 0; i < max; i++) {
      list[i].num = i;
      list[i].true = 1;
   }  

   begin = clock(); // for timing


   /* This is the actual algorithm!
    * Printing stuff is included here as well */
   for(i = 2; i < sqrt(max); i++) {
      if(list[i].true) {
         if(print) printf("%ld ", list[i].num);
         for(j = i * i; j < max; j = (i * i) + (mult++ * i)) {
            list[j].true = 0;
         }
         mult = 1;
      }
   }
   if(print) printf("\n");
   
   end = clock(); // for timing
   
   /*
   if(print) {
      printf("\nPrime numbers below %d:\n", max);
      for(i = 0; i < max; i++) {
         if(list[i].true) {
            printf("%d ", list[i].num);
         }
      }  
      printf("\n");
   }   
   */
   time = (double)(end - begin) / CLOCKS_PER_SEC;

   printf("Calculation time: %.4lf seconds\n", time);

   return 0;
}
