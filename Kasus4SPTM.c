/*
 * Program   : Sistem Tarif Parkir Mall
 * Nama      : [Raka Raditya]
 * NIM       : [12046126025]
 * Deskripsi : switch-case (char) + nested if untuk denda
 */
#include <stdio.h>

int main()
{
    char jenis;
    int lama;
    int tarif;

    printf("=== SISTEM PARKIR MALL SI ===\n");
    printf(" Jenis Kendaran (M=Motor, A=Mobil):");
    scanf(" %c", &jenis); 

    printf("Lama Parkir (jam): ");
    scanf("%d", &lama);

    switch (jenis) {
        case 'M':
        case 'm':
            tarif=lama * 2000;
            if (lama > 5) {
                tarif = tarif + 10000;
                printf("Anda kena denda rp 10000 (parkir > 5 jam)\n");
            }
          printf("Total Tarif Motor: Rp%d\n", tarif);
            break;

            case 'A':
            case 'a':
                 tarif = lama * 4000;
                 if (lama > 5) {
                    tarif = tarif + 15000;
                    printf("Anda kena denda rp 15000 (parkir > 5 jam)\n");
                 }
               printf("Total Tarif Mobil: Rp%d\n", tarif);
                 break;

                 default:
                 printf("ERROR: jenis kendaraan tidak valid\n");
                 printf("Gunakan huruf M atau A saja.\n");
    }
    printf("\nTerima Kasih.\n");
    return 0;
}
