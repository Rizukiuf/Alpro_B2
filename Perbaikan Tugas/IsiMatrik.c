/* Nama File 	: IsiMatrik.c
   Deskripsi 	: Membuat matrik yang memiliki ordo sama (M x N) dengan aturan bahwa nilai 1 diisikan
                  pada elemen-elemen diagonal utama, nilai 0 diisikan pada elemen-elemen di atas
                  diagonal utama, dan nilai 2 diisikan pada elemen-elemen di bawah diagonal utama.
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

int main(){

    //Kamus
    int i, j, M, N;

    //Algoritma
    printf("Program membuat matrik sesuai ketentuan \n");
    printf("Masukkan untuk baris matriks: ");
    scanf("%d", &M);
    printf("Masukkan kolom untuk matriks: ");
    scanf("%d", &N);

    if ((M == N) && (M > 0)) {
        for (i = 1; i <= M; i++) {
            for (j = 1; j <= N; j++) {
                if (i == j) {
                    printf("1 ");
                }
                else if (i < j) {
                    printf("0 ");
                }
                else { // i > j
                    printf("2 ");
                }
            }
            printf("\n");
        }
    }
    else {
        printf("\nNilai M dan N harus sama dan positif.\n");
    }

    getch();
    return 0;
}
