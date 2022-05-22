/* Nama File 	: BilPrimaN.c
   Deskripsi 	: Mencetak bilangan Prima sampai dengan bilangan integer sembarang N
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

int main(){

    //kamus
    int N, i, j, f;

    //algoritma
    printf("Program mencetak bilangan Prima sampai dengan bilangan integer sembarang N \n");
    printf("Masukan untuk bilangan integer N (N>0): ");
    scanf("%d", &N);

    if (N <= 1) {
        if (N <= 0) {
            printf("N harus positif");
        }
        else {  //N=1
            printf("Deret kosong bilangan prima");
        }
    }
    else {
        printf("Bilangan Primanya adalah ");
        for (i = 2; i <= N; i++) {
            f = 0;
            for (j = 2; j <= i; j++){
                if (i % j == 0) {
                    f++;
                }
            }
            if (f == 1) {
                printf("%d, ", i);
            }
        }
    }

    getch();
    return 0;
}
