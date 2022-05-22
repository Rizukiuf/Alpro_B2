/* Nama File 	: JumDere41t.c
   Deskripsi 	: Menghitung jumlah deret bilangan 1,3,6,10,15,21,...,(1/2)n(n+1)
   Pembuat   	: Rizki Utama Fauzi - 24060121130050
   Tgl Pembuatan: Minggu, 22-05-2022
*/

#include<stdio.h>

int main(){

    //kamus
    int N, i, Sn, Un;

    //algoritma
    printf("Program menghitung jumlah deret bilangan 1,3,6,10,15,21,...,(1/2)n(n+1) \n");
    printf("Masukan untuk bilangan N (N>0): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("\nBilangan N harus positif\n");
    }
    else {
        Sn = 0;
        for (i = 1; i <= N; i++) {
            Un = i*(i+1)/2;
            Sn += Un;
            if (i == N) {
                printf("%d = %d ", Un, Sn);
            }
            else {
                printf("%d + ", Un);
            }
        }
    }

    getch();
    return 0;
}
