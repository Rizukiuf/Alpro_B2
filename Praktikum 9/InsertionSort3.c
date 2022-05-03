/*Nama File 	: InsertionSort3.c*/
/*Deskripsi 	: mengurutkan tabel integer/ elemen array dgn insertion sort versi 3*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: 18 April 2022-23:08*/

#include <stdio.h> /*header file*/

int main()
{
    /*Mengurutkan tabel integer [1..N] dengan insertion sort*/

    /*Kamus Lokal*/
    const int Nmax = 100; //ukuran tabel/array
    int T[Nmax]; //masukan kumpulan nilai
    int N; //banyak masukan nilai
    int i; //indeks untuk traversal tabel
    int Pass; //tahap pengurutan
    int Temp; //penyimpan nilai sementara (pengoper nilai)

    /*Algoritma*/
    //Data masukan
    printf("Banyak data masukan: ");
    scanf("%d", &N);
    printf("Masukan kumpulan nilai: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }
    //Tabel awal
    printf("Array/Tabel T sebelum diurutkan adalah: {");
    for (i = 0; i < N-1; i++) {
        printf("%d,", T[i]);
    }
    printf("%d}\n", T[i]);

    //T1 adalah terurut
    for (Pass = 1; Pass < N; Pass++) {
        i = Pass - 1;
        while ((i >= 0) && (T[i] > T[i+1])) {
            Temp = T[i+1]; //Simpan harga T[i+1] supaya tidak tertimpa krn pergeseran
            T[i+1] = T[i]; //Geser
            T[i] = Temp; //Masukan harga T[i+1] yg disimpan
            i--; //Berikutnya
        }
    }
    //Seluuruh tabel terurut, karena Pass = N-1 : T0 <= T1 <= T2 <= T3 <= ... <= TN-1
    printf("Array/Tabel T setelah diurutkan adalah: {");
    for (i = 0; i < N-1; i++) {
        printf("%d,", T[i]);
    }
    printf("%d}\n", T[i]);
    return 0;
}
