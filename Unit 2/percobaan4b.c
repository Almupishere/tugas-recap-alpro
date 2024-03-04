#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}
//jadi ini merupakan lopp dalam loop
//yang dmna setiap looping i didalamnya itu mempunyai loopingan lagi yaitu j
// loop i=2 didalamnya melooping j = 1 sampai 2
//loop i dan j dikalikan untuk mencari hasil perkalian