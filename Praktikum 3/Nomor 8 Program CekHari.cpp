/*Nama File 	: CekHari*/
/*Deskripsi 	: Mengecek dan menampilkan nama hari dari masukan nomor hari*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: Minggu, 13 Maret 2021*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/

	int i;
  	
  /*Algoritma*/
  	printf("Program mengecek nama hari dari nomor hari \n");
    printf("Masukkan sebuah bilangan integer antara 1-7: ");
  	scanf("%d", &i);
    if (i == 1) {
        printf("Nomor %d merupakan hari Senin", i);
    }
    else if (i == 2) {
        printf("Nomor %d merupakan hari Selasa", i);
    }
    else if (i == 3) {
        printf("Nomor %d merupakan hari Rabu", i);
    }
    else if (i == 4) {
        printf("Nomor %d merupakan hari Kamis", i);
    }
    else if (i == 5) {
        printf("Nomor %d merupakan hari Jumat", i);
    }
    else if (i == 6) {
        printf("Nomor %d merupakan hari Sabtu", i);
    }
    else if (i == 7) {
        printf("Nomor %d merupakan hari Minggu", i);
    }
    else{
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}
