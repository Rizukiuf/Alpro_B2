/* Nama File 	: TunjAnak
   Deskripsi 	: Menghitung besarnya tunjangan anak
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 20-03-2022
*/

#include<stdio.h>

int main(){

    //kamus
    int ja, gp, O;

    //algoritma
    printf("Program menghitung besarnya tunjangan anak \n");
    printf("Masukan untuk jumlah anak >= 0: ");
    scanf("%d", &ja);
    printf("Masukan untuk gaji pokok > 0: ");
    scanf("%d", &gp);
    if ((ja >= 0) && (gp > 0)) {
        if (ja <= 3) {
            O = ja * (0.1 * gp);
        }
        else {
            O = 3 * (0.1 * gp);
        }
        printf("%d", O);
    }
    else {
        printf("Bukan masukan yang benar");
    }
    return 0;
}

