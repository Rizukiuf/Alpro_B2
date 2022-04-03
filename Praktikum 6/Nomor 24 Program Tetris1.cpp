/* Nama File 	: Tetris1.cpp
   Deskripsi 	: Menampilkan di layar susunan karakter ‘*’ seperti contoh sesuai masukan N>0
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 27-03-2022 (tanggal pembuatan c) - tanggal 03-04-2022 pindah ke cpp ini
*/

#include<stdio.h>

int main(){

    //kamus
    int N, i, j;

    //algoritma
    printf("Program menampilkan di layar susunan karakter ‘*’ seperti contoh sesuai masukan N>0 \n");
    printf("Masukan untuk bilangan integer N (N>0): ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("N harus positif");
    }
    else {  //N>0
    	i = N;
    	while (i > 0) {
    		j = 1;
        	while (j <= i) {
            	printf("*");
            	j++;
        	}
        	printf(" --%d \n", i);
        	i--;
    	}
    }
    return 0;
}
