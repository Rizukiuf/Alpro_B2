/* Nama File 	: SiputNaik.cpp
   Deskripsi 	: Mencetak berapa hari waktu yang dibutuhkan oleh seekor siput untuk mencapai ketinggin N meter
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 27-03-2022 (tanggal pembuatan cpp ini)
*/

#include<stdio.h>

int main(){

    //kamus
    float N, i;
    int f;

    //algoritma
    printf("Program mencetak berapa hari waktu yang dibutuhkan oleh seekor siput untuk mencapai ketinggin N meter \n");
    printf("Masukan untuk bilangan integer N (N>0): ");
    scanf("%f", &N);
    if (N <= 0) {
        printf("N harus positif");
    }
    else {  //N>0
        i = 0.3;
        f = 1;
        while (i < N) {
            f++;
            i += 0.2;
        }
        printf("%d hari.", f);
    }
    return 0;
}
