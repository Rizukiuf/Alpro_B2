/* Nama File 	: Faktorial.c
   Deskripsi 	: Menghitung nilai Faktorial dari sebuah bilangan integer N sembarang, dengan sub program
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

//deklarasi sub program(Fungsi)
int Faktorial(int p);

int main() {

    //kamus
    int N, i;

    //algoritma
    printf("Program menghitung nilai Faktorial dari sebuah bilangan integer N sembarang, dengan sub program \n");
    printf("Masukan bilangan faktorial: ");
    scanf("%d", &N);
    if (N > 0) {
        printf("\nFaktorial(%d)=", N);
        for (i = N; i > 1; i--) {
            printf("%dx", i);
        }
        printf("1=%d\n", Faktorial(N));
    }
    else {
        printf("\nBilangan harus positif\n");
    }

    getch();
    return 0;
}

int Faktorial(int p) {

    //kamus lokal
    int res, i;

    // algoritma
    res = 1;

    for (i = 1; i <= p; i++) {
        res *= i;
    }
    return res;
}
