#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

//%f: Ini akan mencetak phi dengan semua angka desimal yang ada.
//%.1f: Ini akan mencetak phi dengan satu angka desimal setelah titik desimal.
//%.2f: Ini akan mencetak phi dengan dua angka desimal setelah titik desimal.
//%.3f: Ini akan mencetak phi dengan tiga angka desimal setelah titik desimal.
//%.4f: Ini akan mencetak phi dengan empat angka desimal setelah titik desimal.
//%.5f: Ini akan mencetak phi dengan lima angka desimal setelah titik desimal.