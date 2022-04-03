/* Nama File 	: KelBil.cpp
   Deskripsi 	: Menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Rabu, 30-03-2022 (tanggal pembuatan c) - tanggal 03-04-2022 pindah ke cpp ini
*/

#include<stdio.h>

int main(){

    //kamus
    int N, i, j, KPK;

    //algoritma
    printf("Program menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang \n");
    printf("Masukan untuk bilangan integer N (N>0): ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("N harus positif");
    }
    else {  //N>0
        int A[N];
        printf("Kumpulan angka (urut ke atas) = ");
        for (i = 1; i <= N; i++) {
            scanf("%d", &A[i]);
        }
        KPK = 1;    //inisialisasi
        for (j = 1; j <= N; j++) {
            if (A[j] % KPK == 0) {
                KPK = A[j];
            } else {
                KPK *= A[j];
            }
        }
        printf("\nKelipatan terkecilnya adalah %d\n", KPK);
    }
    return 0;
}
