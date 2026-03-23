#include <stdio.h>

int main() {
    int i, j, ukuran;

    printf("Masukkan ukuran kotak: ");
    scanf("%d", &ukuran);

    for(i = 1; i <= ukuran; i++) {
        for(j = 1; j <= ukuran; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}