#include <stdio.h>
 
int main() {
   int i, start, end;
 
   start = 1;
   end = 10;
    
   printf("In cac so: ");
   for(i = start; i <= end; i++) 
      printf("%2d ", i);
 
   return 0;
}
