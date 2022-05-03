/*Nama File 	: CountSORT.c*/
/*Deskripsi 	: mengurutkan tabel integer/ elemen array dengan pencacahan*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: 3 Mei 2022-23:50*/

#include<stdio.h> /*header file*/

int CountSORT(int T[], int N);

/*CATATAN Pembuat: Pengisian dan pembacaan array dimulai dari index 1 menyesuaikan
notasi algoritmik, sehingga di C, nilai elemen index 0 dari array diabaikan*/

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
    CountSORT(T,N);
    printf("Array/Tabel T setelah diurutkan adalah: {");
    for (i = 1; i < N; i++) {
        printf("%d,", T[i]);
    }
    printf("%d}\n", T[i]);
    return 0;
}

int CountSORT(int T[], int N)
{
    /*Mengurutkan tabel integer [1..N] dengan pencacahan*/

    /*Kamus Lokal*/
    //ValMin dan ValMax adalah batas minimum dan maksimum harga yg tersimpan dlm T, hrs diketahui
    int ValMin, ValMax; //harga minimum dan maksimum dari elmt tabel T
    // TabCount[ValMax] diletakkan di algoritma setelah ValMax diketahui nilainya
    int i, j; //indeks untuk traversal tabel
    int K; //jumlah elmt T yg sdh diisi pd proses pembentukan kembali

    /*Algoritma*/
    //Mencari harga minimum dan maksimum dari elmt tabel T
    ValMin = T[1];
    ValMax = T[1];
    for (i = 2; i <= N; i++) {
        if (ValMin > T[i]) {
            ValMin = T[i];
        }
        if (ValMax < T[i]) {
            ValMax = T[i];
        }
    }
    int TabCount[ValMax]; //tabel penghitung
    //Inisialisasi TabCount
    for (i = ValMin; i <= ValMax; i++) {
        TabCount[i] = 0;
    }
    //Counting
    for (i = 1; i <= N; i++) {
        TabCount[T[i]] = TabCount[T[i]] + 1;
    }
    //Pengisian kembali: T1 <= T2 <= ... <= TN
    K = 0;
    for (i = ValMin; i <= ValMax; i++) {
        if (TabCount[i] != 0) {
            for (j = TabCount[i]; j >= 1; j--) {
                K++;
                T[K] = i;
            }
        }
    }
}
