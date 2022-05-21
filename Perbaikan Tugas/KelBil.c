/* Nama File 	: KelBil.c
   Deskripsi 	: Menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Sabtu, 21-05-2022
*/

#include<stdio.h>
#include<stdbool.h>

int main() {

    //Kamus
    int A[20]; //array input angka yg dicari KPKnya
    int N; //jumlah input angka
    int KPK; //hasil akhir berupa KPK
    int i; //increment
    int count; //hitung jumlah angka yg dpt membagi habis nilai KPK
    bool next; //melanjutkan looping atau tidak, fungsinya seperti break; jika nilainya false

    //Algoritma

    //input angka
    printf("Program menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang \n");
    printf("Masukan untuk jumlah angka: ");
    scanf("%d", &N);
    printf("Masukan sebanyak %d angka: ", N);
    for (i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
    }

    KPK = 0; //inisialisasi KPK
    for (i = 1; i <= N; i++) {
        if (KPK < A[i]) {
            KPK = A[i];
        }
    } //KPK sementara ini adalah nilai input angka yg terbesar

    //Pencarian KPK
    next = true; //inisialisasi next untuk melanjutkan looping
    while (next == true) {
        count = 0;
        for (i = 1; i <= N; i++) { //menghitung input angka yang dapat membagi habis KPK
            if (KPK % A[i] == 0) {
                count++;
            }
        }
        //cek apakah KPK dapat dibagi oleh semua input angka?
        //jika ya di mana count(angka yg membagi habis KPK) = jumlah input (N), looping dihentikan
        //keadaan stop looping
        if (count == N) {
            next = false;
        }
        //meneruskan looping dengan nilai KPK selanjutnya, yaitu KPK+1, lalu akan mengeceknya lagi
        else {
            KPK++;
        }
    }
    //keluar looping artinya sudah menemukan KPK yang tepat dari input angka

    //Menampilkan hasil
    printf("\nKelipatan bilangan terkecil dari (");
    for(i = 1; i < N; i++) {
        printf("%d,", A[i]);
    }
    printf("%d) = %d\n", A[i], KPK);

    getch();
    return 0;
}
