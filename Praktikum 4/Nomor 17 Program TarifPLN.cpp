/* Nama File 	: TarifPLN
   Deskripsi 	: Menghitung besarnya tarif PLN
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 20-03-2022
*/

#include<stdio.h>

int main(){

    //kamus
    int gt, pd, O;

    //algoritma
    printf("Program menghitung besarnya tarif PLN \n");
    printf("Masukan untuk golongan tarif (1-2): ");
    scanf("%d", &gt);
    printf("Masukan untuk pemakaian daya listrik (kWH > 0): ");
    scanf("%d", &pd);
    if ((gt >= 1) && (gt <= 2) && (pd > 0)) {
        if (gt == 1) {
            if (pd <= 100) {
                O = 100 * 1000;
            }
            else if ((pd > 100) && (pd < 1000)) {
                O = pd * 1000;
            }
            else {
                O = pd * 1000 + 0.1 * pd * 1000;
            }
        }
        else {  //gt = 2
            if (pd < 100) {
                O = 100 * 2000;
            }
            else if ((pd >= 100) && (pd < 1000)) {
                O = pd * 2000;
            }
            else {
                O = pd * 2000 + 0.1 * pd * 2000;
            }
        }
        printf("%d", O);
    }
    else {
        printf("Bukan masukan yang benar");
    }
    return 0;
}

