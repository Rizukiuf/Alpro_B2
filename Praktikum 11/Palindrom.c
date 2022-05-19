/*Nama File 	: Palindrom*/
/*Deskripsi 	: Mesin abstrak untuk mengecek apakah kata atau kalimat yang dimasukkan merupakan palindrom*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int Palindrom (char *K)
{
    //kamus lokal
    int i, j;

    //algoritma
    i = 0;
    j = strlen(K)-1;
    while ((i < j) && (K[i] == K[j])) {
        i = i + 1;
        j = j - 1;
        //i = j or K.TabKata[i] != K.TabKata[j]
    }
    return (K[i] == K[j]);
}

int main()
{
    //kamus
    char K[100];

    //algoritma
    printf("Masukan kata-kata: ");
    gets(K);

    if (Palindrom(K)) {
        printf("Palindrom\n");
    }
    else {
        printf("Bukan palindrom\n");
    }

    getch();
    return 0;
}
