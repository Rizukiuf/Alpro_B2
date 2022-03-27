/* Nama File 	: CekSempurna.cpp
   Deskripsi 	: Menentukan apakah bilangan integer sembarang N (N>0) termasuk bilangan sempurna atau bukan
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 20-03-2022 (tanggal pembuatan c) - tanggal 27-03-2022 pindah ke cpp ini
*/

#include<stdio.h>

int main(){

    //kamus
    int N, f, i;

    //algoritma
    printf("Program menentukan apakah bilangan integer sembarang N (N>0) termasuk bilangan sempurna atau bukan \n");
    printf("Masukan untuk bilangan integer N (N>0): ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("N harus positif");
    }
    else {  //N>0
        i = 1;  //inisialisasi
        f = 0;
        while (i <= (N/2)){
            if (N % i == 0) {
                f = f + i;
            }
            i++;
        }
        if (f == N) {
            printf("Bilangan sempurna");
        }
        else {
            printf("Bukan bilangan sempurna");
        }
    }
    return 0;
}
