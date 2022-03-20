/* Nama File 	: FaktorBil
   Deskripsi 	: Menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0)
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 20-03-2022
*/

#include<stdio.h>

int main(){

    //kamus
    int N, i;

    //algoritma
    printf("Program menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0) \n");
    printf("Masukan untuk bilangan integer N (N>0): ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("N harus positif");
    }
    else {  //N>0
        i = 1;  //inisialisasi
        while (i <= N){
            if (N % i == 0) {
                printf("| %d", i);
            }
            i++;
        }
    }
    return 0;
}

