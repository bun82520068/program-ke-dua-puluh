#include <stdio.h>

int main() {
    int tinggi = 5;
    int i, j;

    for(i = 1; i <= tinggi; i++) {
       
        for(j = 1; j <= tinggi - i; j++) {
            printf(" ");
        }

    
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    for(i = 1; i <= 2; i++) {
        for(j = 1; j <= tinggi - 1; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    return 0;
}