#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}
//Program ini adalah contoh sederhana penggunaan array dalam bahasa pemrograman C 
//untuk menyimpan nama dan usia beberapa orang. 
//Dua array digunakan: satu untuk menyimpan nama-nama orang dan yang lainnya untuk menyimpan usia mereka. 
//Program kemudian mencetak tabel yang berisi nama dan usia setiap orang yang disimpan dalam array. 
//Hal ini dilakukan dengan menggunakan loop for untuk mengakses setiap entri dalam array dan mencetaknya menggunakan fungsi printf().