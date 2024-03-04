#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}
//Program tersebut mencetak hasil perkalian dari bilangan utama (i) 
//dengan bilangan pengali (j) untuk setiap nilai i mulai dari 2 hingga 3, 
//dan nilai j mulai dari 1 hingga 2.