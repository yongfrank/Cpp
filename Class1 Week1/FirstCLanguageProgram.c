#include <stdio.h>

int main(void) {
    int n;
    int factorial(int n);

    do {
        printf("Factorial number: ");
        scanf("%d", &n);
        printf("Ans: %d \n", factorial(n));
    } while(1);
    
    return 0;
}

int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}