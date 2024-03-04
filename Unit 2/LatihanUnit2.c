#include <stdio.h>

int main() {
    int jumlah, nominal, total = 0;

    
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlah);

    
    if (jumlah <= 0) {
        printf("Tidak ada transaksi hari ini\n");
    } else {
       
        printf("Masukkan nominal masing-masing transaksi:\n");
        for (int i = 1; i <= jumlah; ++i) {
            scanf("%d", &nominal);
            total += nominal;
        }

       
        printf("Total pengeluaran hari ini: %d\n", total);
    }

    return 0;
}
