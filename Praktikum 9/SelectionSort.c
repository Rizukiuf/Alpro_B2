/*Nama File 	: SelectionSort.c*/
/*Deskripsi 	: mengurutkan tabel integer/ elemen array dgn bubble sort*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: 4 Mei 2022-06:15*/

#include<stdio.h> /*header file*/

int SelectionSort(int T[], int N);

/*Program Utama*/
int main()
{
    /*Kamus*/
    const int Nmax = 100; //ukuran tabel/array
    int T[Nmax]; //masukan kumpulan nilai
    int N; //banyak masukan nilai/ indeks efektif, maksimum tabel yg terdefinisi, N < NMax
    int i; //increment mengisi atau mengeluarkan elmt array

    /*Algoritma*/
    //Data masukan
    printf("Banyak data masukan: ");
    scanf("%d", &N);
    printf("Masukan kumpulan nilai: ");
    for (i = 1; i <= N; i++) {
        scanf("%d", &T[i]);
    }
    //Tabel awal
    printf("Array/Tabel T sebelum diurutkan adalah: {");
    for (i = 1; i < N; i++) {
        printf("%d,", T[i]);
    }
    printf("%d}\n", T[i]);
    //Tabel hasil pengurutan
    SelectionSort(T,N);
    printf("Array/Tabel T setelah diurutkan adalah: {");
    for (i = 1; i < N; i++) {
        printf("%d,", T[i]);
    }
    printf("%d}\n", T[i]);
    return 0;
}

int SelectionSort(int T[], int N)
{
    /*Mengurutkan tabel integer [1..N] dengan bubble sort*/

    /*Kamus Lokal*/
    int i, j; //indeks untuk traversal tabel
    int Min; //memorisasi untuk pertukaran harga
    int iMin; //memorisasi indeks untuk pertukaran harga

    /*Algoritma*/
    for (i = 1; i <= N-1; i++) {
        Min = T[i]; //inisialisasi elemen T[i] sebagai minimum
        //menentukan harga minimum dari semua elemen
        for (j = i+1; j <= N; j++) {
            if (Min > T[j]) {
                Min = T[j];
                iMin = j;
            }
        }
        //proses swapping
        if (T[i] != Min) {
            T[iMin] = T[i];
            T[i] = Min;
        }
    }
    //Seluuruh tabel terurut, karena i = N-1 : T1 <= T2 <= T3 <= ... <= TN
}
