#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    long int num = 600851475143;
   for(int i = 2; i < num; i++) {
       if(num % i == 0) {
           num /= i;
       }
   }
   printf("%d\n", num);
    return 0;
}

