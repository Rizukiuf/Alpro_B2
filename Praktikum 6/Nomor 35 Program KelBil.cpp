/* Nama File 	: KelBil.cpp
   Deskripsi 	: Menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 03-04-2022 - ralat Kamis, 07-04-2022
*/


#include<stdio.h>
#include<stdbool.h>

int main() {

    //kamus
    int A[10], N, KPK, i, count;
    bool next;

    //algoritma
    printf("Program menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang \n");
    printf("Masukan untuk jumlah angka: ");
    scanf("%d", &N);
    printf("Masukan kumpulan sebanyak %d angka: ", N);
    for (i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
    }
    KPK = 0;
    for (i = 1; i <= N; i++) {
        if (KPK < A[i]) {
            KPK = A[i];
        }
    }
    next = true;
    while (next == true) {
        count = 0;
        for (i = 1; i <= N; i++) {
            if (KPK % A[i] == 0) {
                count++;
            }
        }
        //Keadaan stop rekursif
        if (count == N) {
            next = false;
        }
        //Meneruskan rekursif
        else {
            KPK++;
        }
    }
    //Menampilkan hasil
    printf("\nKelipatan bilangan terkecil dari (");
    for(i = 1; i < N; i++) {
        printf("%d,", A[i]);
    }
    printf("%d) = %d\n", A[i], KPK);
    return 0;
}
