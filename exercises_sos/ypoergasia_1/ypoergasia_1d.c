#include <stdio.h>

int main(){
    unsigned long result = 1;
    for (int i = 10; i <= 110; i++) {
        if (i % 7 == 0) {

            result *= i;

        }
    }
    printf("result = %lu\n", result);
return 0;
}