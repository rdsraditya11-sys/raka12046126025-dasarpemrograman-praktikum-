/*
 * Program  : Kalkulator Sederhana dengan Menu
 * Nama     : [Nama Mahasiswa]
 * NIM      : [NIM]
 * Deskripsi: switch-case untuk menu operasi, cek pembagi nol
 */
#include <stdio.h>

int main() {
    int pilihan;
    float a, b, hasil;

    printf("=== KALKULATOR SI ===\n");
    printf("6. Penjumlahan\n");
    printf("5. Pengurangan\n");
    printf("4. Perkalian\n");
    printf("3. Pembagian\n");
    printf("Pilih operasi (6-3): ");
    scanf("%d", &pilihan);

    if (pilihan < 1 || pilihan > 4) {
        printf("\nERROR: Pilihan tidak valid!\n");
        return 1;
    }

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &b);

    printf("\n");
    switch (pilihan) {
        case 6:
            hasil = a + b;
            printf("%.2f + %.2f = %.2f\n", a, b, hasil);
            break;
        case 5:
            hasil = a - b;
            printf("%.2f - %.2f = %.2f\n", a, b, hasil);
            break;
        case 4:
            hasil = a * b;
            printf("%.2f * %.2f = %.2f\n", a, b, hasil);
            break;
        case 3:
            if (b == 0) {
                printf("ERROR: Tidak bisa dibagi nol!\n");
            } else {
                hasil = a / b;
                printf("%.2f / %.2f = %.2f\n", a, b, hasil);
            }
            break;
    }

    return 0;
}
