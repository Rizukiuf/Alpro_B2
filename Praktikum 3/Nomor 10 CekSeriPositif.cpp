/*Nama File 	: CekSeriPositif*/
/*Deskripsi 	: Mengecek dan menampilkan total tahanan jika dirangkai seri*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: Minggu, 13 Maret 2021*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/

	int r1,r2,r3,O;
  	
  /*Algoritma*/
  	printf("Program mengecek total tahanan jika dirangkai seri \n");
    printf("Masukkan untuk r1: ");
    scanf("%d", &r1);
    printf("Masukkan untuk r2: ");
    scanf("%d", &r2);
    printf("Masukkan untuk r3: ");
    scanf("%d", &r3);
    if (r1>=0 && r2>=0 && r3>=0) {
        O = r1 + r2 + r3;
        printf("Total tahanannya adalah %d", O);
    }
    else {
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
