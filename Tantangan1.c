/*
 * Program  : Sistem Klasifikasi BMI
 * Nama     : [Raka Raditya]
 * NIM      : [12046126025]
 * Deskripsi: if-else if untuk klasifikasi BMI
 */
#include <stdio.h>

int main() {
    float berat, tinggi, bmi;

    printf("=== SISTEM KLASIFIKASI BMI ===\n");
    printf("Masukkan Berat Badan (kg): ");
    scanf("%f", &berat);
    printf("Masukkan Tinggi Badan (m): ");
    scanf("%f", &tinggi);

    if (berat <= 0 || tinggi <= 0) {
        printf("\nERROR: Berat dan tinggi harus lebih dari 0!\n");
        return 1;
    }

    bmi = berat / (tinggi * tinggi);

    printf("\n==================================\n");
    printf("          HASIL BMI               \n");
    printf("==================================\n");
    printf("BMI: %.1f\n", bmi);

    if (bmi < 18.5) {
        printf("Kategori: Berat Badan Kurang\n");
    } else if (bmi < 25.0) {
        printf("Kategori: Berat Badan Normal\n");
    } else if (bmi < 30.0) {
        printf("Kategori: Berat Badan Berlebih\n");
    } else {
        printf("Kategori: Obesitas\n");
    }
    printf("==================================\n");

    return 0;
}