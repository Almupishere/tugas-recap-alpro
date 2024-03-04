#include <stdio.h>

int main() {
    int jarak, waktu, kecepatan;

    
    printf("Masukkan jarak dan waktu (dalam meter dan detik): ");
    scanf("%d %d", &jarak, &waktu);

    
    float v = (float)jarak / waktu;

    
    printf("Masukkan kecepatan dan waktu (dalam meter/detik dan detik): ");
    scanf("%d %d", &kecepatan, &waktu);

    
    float s = (float)kecepatan * waktu;

    
    printf("Masukkan jarak dan kecepatan (dalam meter dan meter/detik): ");
    scanf("%d %d", &jarak, &kecepatan);

    
    float t = (float)jarak / kecepatan;

    
    printf("Kecepatan: %.2f m/s\n", v);
    printf("Jarak: %.2f meter\n", s);
    printf("Waktu: %.2f detik\n", t);

    return 0;
}
