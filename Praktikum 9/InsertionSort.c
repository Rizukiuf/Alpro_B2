/*Nama File 	: InsertionSort.c*/
/*Deskripsi 	: mengurutkan tabel integer/ elemen array dgn insertion sort*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: 18 April 2022-22:48*/

#include<stdio.h> /*header file*/

int InsertionSORT(int T[], int N);

/*Program Utama*/
int main()
{
    /*Kamus*/
    const int Nmax = 100; //ukuran tabel/array
    int T[Nmax]; //masukan kumpulan nilai
    int N; //banyak masukan nilai
    int i; //increment mengisi atau mengeluarkan elmt array

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
    //Tabel hasil pengurutan
    InsertionSORT(T,N);
    printf("Array/Tabel T setelah diurutkan adalah: {");
    for (i = 0; i < N-1; i++) {
        printf("%d,", T[i]);
    }
    printf("%d}\n", T[i]);
    return 0;
}

/*CATATAN Pembuat: Karena di C, index array dimulai dari 0, maka dalam penerjemahan
notasi algoritmiknya pd SUBPROGRAM, setiap penggunaan array harus dikurangi dengan 1.
Contoh: T[i] menjadi T[i-1]*/
int InsertionSORT(int T[], int N)
{
    /*Mengurutkan tabel integer [1..N] dengan insertion sort*/

    /*Kamus Lokal*/
    int i; //indeks untuk traversal tabel
    int Pass; //tahap pengurutan
    int Temp; //penyimpan harga TPass spy tdk tertimpa krn pergeseran

    /*Algoritma*/
    //T1 adalah terurut
    for (Pass = 2; Pass <= N; Pass++) {
        Temp = T[Pass-1]; //Simpan harga TPass supaya tidak tertimpa krn pergeseran
        //Sisipkan elemen ke-Pass dlm T [1..Pass-1] sambil menggeser
        i = Pass - 1;
        //Cari i, Temp < Ti and i > 1
        while ((Temp < T[i-1]) && (i > 1)) {
            T[i+1-1] = T[i-1]; //Geser
            i--; //Berikutnya
        }
        //Temp >= Ti (tempat yg tepat) or i = 1 (Sisipan sbg elmt pertama)
        if (Temp >= T[i-1]) {
            T[i+1-1] = Temp; //Menemukan tempat yg tepat
        }
        else { //Temp < T[i]
            T[i+1-1] = T[i-1];
            T[i-1] = Temp; //Sebagai elmt pertama
        }
        //T[1..Pass] terurut membesar: T1 <= T2 <= ... <= TPass
    }
    //Seluruh tabel terurut, karena Pass = N : T1 <= T2 <= T3 <= ... <= TN
}
