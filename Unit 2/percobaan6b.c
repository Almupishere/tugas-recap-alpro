#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}
//menggunakan dua perulangan do-while bersarang untuk 
//mencetak hasil perkalian dari bilangan utama (i) dengan bilangan pengali (j) 
//dari 1 hingga 2, untuk setiap nilai i mulai dari 2 hingga 3.