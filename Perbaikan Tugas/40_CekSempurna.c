/* Nama File 	: CekSempurna.c
   Deskripsi 	: Menentukan apakah bilangan i termasuk bilangan SEMPURNA atau BUKAN
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

int main(){

    //kamus
    int i, f, j;

    //algoritma
    printf("Program menentukan apakah bilangan i termasuk bilangan SEMPURNA atau BUKAN \n");
    printf("Masukan untuk bilangan integer sembarang i (i>0): ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("i harus positif");
    }
    else {  //i>0
        j = 1;  //inisialisasi
        f = 0;
        while (j <= (i/2)){
            if (i % j == 0) {
                f = f + j;
            }
            j++;
        }
        if (f == i) {
            printf("\n%d Bilangan sempurna\n", i);
        }
        else {
            printf("\n%d BUKAN bilangan sempurna\n", i);
        }
    }

    getch();
    return 0;
}
