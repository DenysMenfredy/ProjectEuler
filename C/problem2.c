#include <stdio.h>

#define MAX 4000000 


int main(int argc, char **argv) {

    int i, fibo, current, previous, sum_of_pairs;
    current = 1;
    previous = 0;
    sum_of_pairs = 0;
    while(fibo <= MAX ){
        fibo = current + previous;
        previous = current;
        current = fibo;
        if(fibo %2 == 0) {
            sum_of_pairs+= fibo;
        }
        //printf("%d\n", fibo);
    }
    printf("\nSum of pairs: %d\n", sum_of_pairs);

    return 0;
}