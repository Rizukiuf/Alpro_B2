/* Nama File 	: CekPrima.c
   Deskripsi 	: Menentukan apakah bilangan i termasuk bilangan PRIMA atau BUKAN
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

int main(){

    //kamus
    int i, f, j;

    //algoritma
    printf("Program menentukan apakah bilangan i termasuk bilangan PRIMA atau BUKAN \n");
    printf("Masukan untuk bilangan integer sembarang i (i>0): ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("i harus positif");
    }
    else {  //i>0
        j = 2;  //inisialisasi
        f = 0;
        while (j <= i){
            if (i % j == 0) {
                f++;
            }
            j++;
        }
        if (f == 1) {
            printf("\n%d Bilangan prima\n", i);
        }
        else {
            printf("\n%d BUKAN bilangan prima\n", i);
        }
    }

    getch();
    return 0;
}
