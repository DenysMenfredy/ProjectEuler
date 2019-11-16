#include <stdio.h>

int main() {

int sum, i;
sum = 0;
for(i = 0; i < 1000; i++){
    if(i % 3 == 0 || i % 5 == 0){
        sum += i;
    }else
	    continue;
}
printf("Soma: %d\n", sum);
return 0;
}
