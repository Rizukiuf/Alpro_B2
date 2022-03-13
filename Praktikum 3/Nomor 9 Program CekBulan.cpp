/*Nama File 	: CekBulan*/
/*Deskripsi 	: Mengecek dan menampilkan nama bulan dari nomor bulan*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: Minggu, 13 Maret 2021*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/

	int i;
  	
  /*Algoritma*/
  	printf("Program mengecek nama bulan dari nomor bulan \n");
    printf("Masukkan sebuah bilangan integer antara 1-12: ");
    scanf("%d", &i);
    if (i == 1) {
        printf("Nomor %d merupakan bulan Januari", i);
    }
    else if (i == 2) {
        printf("Nomor %d merupakan bulan Februari", i);
    }
    else if (i == 3) {
        printf("Nomor %d merupakan bulan Maret", i);
    }
    else if (i == 4) {
        printf("Nomor %d merupakan bulan April", i);
    }
    else if (i == 5) {
        printf("Nomor %d merupakan bulan Mei", i);
    }
    else if (i == 6) {
        printf("Nomor %d merupakan bulan Juni", i);
    }
    else if (i == 7) {
        printf("Nomor %d merupakan bulan Juli", i);
    }
    else if (i == 8) {
        printf("Nomor %d merupakan bulan Agustus", i);
    }
    else if (i == 9) {
        printf("Nomor %d merupakan bulan September", i);
    }
    else if (i == 10) {
        printf("Nomor %d merupakan bulan Oktober", i);
    }
    else if (i == 11) {
        printf("Nomor %d merupakan bulan November", i);
    }
    else if (i == 12) {
        printf("Nomor %d merupakan bulan Desember", i);
    }
    else{
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}
