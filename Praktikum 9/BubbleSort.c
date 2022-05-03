/*Nama File 	: BubbleSort.c*/
/*Deskripsi 	: mengurutkan tabel integer/ elemen array dgn bubble sort*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: 3 Mei 2022-23:51*/

#include<stdio.h> /*header file*/

int BubbleSort(int T[], int N);

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
    BubbleSort(T,N);
    printf("Array/Tabel T setelah diurutkan adalah: {");
    for (i = 1; i < N; i++) {
        printf("%d,", T[i]);
    }
    printf("%d}\n", T[i]);
    return 0;
}

int BubbleSort(int T[], int N)
{
    /*Mengurutkan tabel integer [1..N] dengan bubble sort*/

    /*Kamus Lokal*/
    int i, K; //indeks untuk traversal tabel
    int Pass; //tahap pengurutan
    int Temp; //memorisasi untuk pertukaran harga

    /*Algoritma*/
    for (Pass = 1; Pass <= N-1; Pass++) {
        for (K = N; K >= Pass+1; K--) {
            if (T[K] < T[K-1]) {
                Temp = T[K];
                T[K] = T[K-1];
                T[K-1] = Temp;
            }
        }
        //T[1..Pass] terurut membesar: T1 <= T2 <= ... <= TPass
    }
    //Seluuruh tabel terurut, karena Pass = N : T1 <= T2 <= T3 <= ... <= TN
}
