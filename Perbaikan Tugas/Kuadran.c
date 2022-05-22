/* Nama File 	: Kuadran.c
   Deskripsi 	: Mengecek kuadran sebuah titik P
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

int main(){

    //Kamus
    int X, Y;

    //Algoritma
    printf("Program mengecek kuadran sebuah titik P \n");
    printf("Masukkan untuk koordinat X: ");
    scanf("%d", &X);
    printf("Masukkan untuk koordinat Y: ");
    scanf("%d", &Y);

    if (X == 0) {
        if (Y == 0) {
            printf("\nTitik pusat O(0,0)\n");
        }
        else {
            printf("\nTitik berada tepat pada sumbu X\n");
        }
    }
    else if (X > 0) {
        if (Y > 0) {
            printf("\nKuadran I\n");
        }
        else if (Y < 0) {
            printf("\nKuadran IV\n");
        }
        else if (Y == 0) {
            printf("\nTitik berada tepat pada sumbu Y\n");
        }
        else {
            printf("\nMasukan tidak valid\n");
        }
    }
    else if (X < 0) {
        if (Y > 0) {
            printf("\nKuadran II\n");
        }
        else if (Y < 0) {
            printf("\nKuadran III\n");
        }
        else if (Y == 0) {
            printf("\nTitik berada tepat pada sumbu Y\n");
        }
        else {
            printf("\nMasukan tidak valid\n");
        }
    }
    else {
        printf("\nMasukan tidak valid\n");
    }

    getch();
    return 0;
}
