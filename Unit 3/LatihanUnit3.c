#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // inputannya
    
    int arr[n];
    
    // proses menjumlahkan untuk setiap nilainya
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    // Mencetak hasil penjumlahan
    printf("%d\n", sum);
    
    return 0;
}
