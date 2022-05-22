/* Nama File 	: JumPrima.c
   Deskripsi 	: Menampilkan deret bilangan Prima dan hasil penjumlahan dari deret tersebut
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

int main(){

    //kamus
    int N, i, j, f, Sn;

    //algoritma
    printf("Program menampilkan deret bilangan Prima dan hasil penjumlahan dari deret tersebut \n");
    printf("Masukan untuk bilangan integer N (N>0): ");
    scanf("%d", &N);

    if (N <= 1) {
        if (N < 0) {
            printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
        }
        else {  //N>=0
            printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
        }
    }
    else {  //N>1
        Sn = 0;
        for (i = 2; i <= N; i++) {
            f = 0;
            for (j = 2; j <= i; j++){
                if (i % j == 0) {
                    f++;
                }
            }
            if (f == 1) {
                Sn = Sn + i;
                printf("%d + ", i);
            }
        }
        printf("dengan Jumlahan Deret Bilangannya adalah Sn=%d", Sn);
    }

    getch();
    return 0;
}
