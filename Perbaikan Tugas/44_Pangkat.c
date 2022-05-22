/* Nama File 	: Pangkat.c
   Deskripsi 	: Menuliskan nilai hasil pemangkatan bilangan i dan j, dengan sub program
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

//deklarasi subprogram
float Pangkat(int p, int q);

int main() {
    //kamus
    int i, j;

    //algoritma
    printf("Program menuliskan nilai hasil pemangkatan bilangan i dan j, dengan sub program \n");
    printf("Masukan bilangan basis: ");
    scanf("%d", &i);
    printf("Masukkan bilangan pangkat: ");
    scanf("%d", &j);

    printf("\n%d pangkat %d menghasilkan nilai %.2f\n", i, j, Pangkat(i, j));

    getch();
    return 0;
}

float Pangkat(int p, int q) {

    //kamus lokal
    int a;
    float res;

    //algoritma
    res = 1;
    if (q > 0) {
        for (a = q; a >= 1; a--) {
            res *= p;
        }
    }
    else if (q < 0) {
        for (a = q; a <= -1; a++) {
            res /= p;
        }
    }
    else {
        res = 1;
    }
    return res;
}
