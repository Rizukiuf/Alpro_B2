/* Nama File 	: KelBil_v2.c
   Deskripsi 	: Menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>
#include<stdbool.h>

int main(){

    //Kamus
    int N, i, max, A[10], KPK[10];
    bool fit;

    //Algoritma

    printf("Program menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang \n");
    printf("Masukan untuk jumlah bilangan: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("N harus positif");
    }
    else {  //N>0

        //input angka
        printf("Masukan sebanyak %d angka: ", N);
        for (i = 1; i <= N; i++) {
            scanf("%d", &A[i]);
        }

        //duplikat penyimpanan input dari array A ke array KPK
        for (i = 1; i <= N; i++) {
            KPK[i] = A[i];
        }

        //Pencarian KPK
        /*Konsepnya, kita terus menjumlahkan setiap input menghasilkan kelipatannya dan di
          simpan ke KPK. Ketika semua elemen KPK sudah sama, maka nilai itu adalah KPK nya.
            Contoh: 3 5 10
            3,          9,          12 (max),   12,         21 (max),   21,         30.
            5,          10 (max),   10,         15,         20,         25,         30.
            10 (max),   10 (max),   10,         20 (max),   20,         30 (max),   30.
                        blm sama    blm sama    blm sama    blm sama    blm sama    Sudah sama.
        */

        while (1) {
            max = 0;
            for (i = 1; i <= N; i++) { //mencari max dari array KPK sbg batas pelipatan
                if (max < KPK[i]) {
                    max = KPK[i];
                }
            }

            for (i = 1; i <= N; i++) { //setiap elemen KPK ke-i dijumlahkan terus dgn elemen A ke-i..
                while (KPK[i] < max) { //..sampai semua elemen KPK sama atau melampaui max (batas pelipatan)
                    KPK[i] += A[i];
                }
            }
            //kita sudah punya nilai setiap elemen KPK yg baru

            //cek apakah masing2 elemen KPK sudah sama.
            fit = true;
            for (i = 1; i <= N; i++) {
                if (max == KPK[i]) {
                    fit = fit && true;
                }
                else {
                    fit = fit && false;
                }
            }
            //jika sudah akan di-stop, jika belum di-looping kembali
            if (fit == true) {
                break;
            }
        }

        //Menampilkan hasil
        printf("\nKelipatan bilangan terkecil dari (");
        for(i=1; i < N; i++) {
            printf("%d,", A[i]);
        }
        printf("%d) = %d\n", A[i], KPK[N]);
    }

    getch();
    return 0;
}
