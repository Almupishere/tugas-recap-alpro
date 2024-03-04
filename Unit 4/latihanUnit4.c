#include <stdio.h>

// Fungsi untuk menghitung keliling persegi
int hitungKelilingPersegi(int sisi) {
    return 4 * sisi;
}

// Fungsi untuk menghitung luas persegi
int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung volume kubus
int hitungVolumeKubus(int sisi) {
    return sisi * sisi * sisi;
}

int main() {
    int sisi;
    scanf("%d", &sisi); // Membaca panjang sisi dari input
    
    // Menghitung keliling persegi, luas persegi, dan volume kubus
    int kelilingPersegi = hitungKelilingPersegi(sisi);
    int luasPersegi = hitungLuasPersegi(sisi);
    int volumeKubus = hitungVolumeKubus(sisi);
    
    // Menampilkan hasil perhitungan
    printf("%d\n", kelilingPersegi);
    printf("%d\n", luasPersegi);
    printf("%d\n", volumeKubus);
    
    return 0;
}
