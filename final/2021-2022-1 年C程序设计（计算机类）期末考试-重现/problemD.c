#include <stdio.h>

void get_triangle(char triangleComponent, int lineCount) {
    for(int i = 0; i < lineCount - 1; i++) {
        for(int j = i; j < lineCount - 1; j++) {
            printf(" ");
        }
        printf("%c", triangleComponent);
        if (i != 0) {
            for(int j = 0; j < i * 2 - 1; j++) {
                printf(" ");
            }
            printf("%c\n", triangleComponent);
        } else {
            printf("\n");
        }
    }
    for (int i = 0; i < lineCount * 2 - 1; i++) {
        printf("%c", triangleComponent);
    }
    printf("\n\n");
}


int main() {
    char character = 'a';
    int amount = 0;
    while(1) {
        scanf("%s", &character);
        if (character == '@') { 
            break; 
        } else {
            scanf("%d", &amount);
            get_triangle(character, amount);
        }
    }
}