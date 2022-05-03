/*Nama File 	: InsertionSort2.c*/
/*Deskripsi 	: mengurutkan tabel integer/ elemen array dgn insertion sort, pencarian dgn sentinel*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: 18 April 2022-23:10*/

#include<stdio.h> /*header file*/

int InsertionSORT(int T[], int N);

/*CATATAN Pembuat: Pengisian dan pembacaan array dimulai dari index 1 menyesuaikan
notasi algoritmik, sehingga di C, nilai elemen index 0 dari array diabaikan*/

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
    InsertionSORT(T,N);
    printf("Array/Tabel T setelah diurutkan adalah: {");
    for (i = 1; i < N; i++) {
        printf("%d,", T[i]);
    }
    printf("%d}\n", T[i]);
    return 0;
}

int InsertionSORT(int T[], int N)
{
    /*Mengurutkan tabel integer [1..N] dengan insertion sort, pencarian dgn sentinel*/

    /*Kamus Lokal*/
    int i; //indeks untuk traversal tabel
    int Pass; //tahap pengurutan
    int Temp; //penyimpan harga TPass spy tdk tertimpa krn pergeseran

    /*Algoritma*/
    //T1 adalah terurut
    for (Pass = 2; Pass <= N; Pass++) {
        Temp = T[Pass]; //Simpan harga TPass supaya tidak tertimpa krn pergeseran
        T[0] = Temp;
        //Sisipkan elemen ke-Pass dlm T [1..Pass-1] sambil menggeser
        i = Pass - 1;
        //Cari i, Temp < Ti and i > 1
        while (Temp < T[i]) {
            T[i+1] = T[i]; //Geser
            i--; //Berikutnya
        }
        //Temp >= Ti
        T[i+1] = Temp; //Sisipkan
        //T[1..Pass] terurut: T1 <= T2 <= ... <= TPass
    }
    //Seluruh tabel terurut, karena Pass = N : T1 <= T2 <= T3 <= ... <= TN
}
