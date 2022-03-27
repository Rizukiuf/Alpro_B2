/* Nama File 	: DeretPrima.cpp
   Deskripsi 	: Mencetak bilangan prima yang dapat dibentuk dari bilangan integer sembarang N (N>0)
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 20-03-2022 (tanggal pembuatan c) - tanggal 27-03-2022 pindah ke cpp ini
*/

#include<stdio.h>

int main(){

    //kamus
    int N, i, j, f;

    //algoritma
    printf("Program mencetak bilangan prima yang dapat dibentuk dari bilangan integer sembarang N (N>0) \n");
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
        for (i = 2; i <= N; i++) {
            f = 0;
            for (j = 2; j <= i; j++){
                if (i % j == 0) {
                    f++;
                }
            }
            if (f == 1) {
                printf("| %d", i);
            }
        }
    }
    return 0;
}
