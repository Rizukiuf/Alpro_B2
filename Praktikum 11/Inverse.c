/*Nama File 	: Inverse*/
/*Deskripsi 	: Mesin abstrak untuk menampilkan kata yang ada pada pita secara terbalik*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/


#include <stdio.h>

void Invers();

int main() {
    printf("Masukan kalimat: ");
    printf("Hasil invers: ");
    Invers();

    getch();
    return 0;
}

void Invers() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        Invers();
        printf("%c", c);
    }
}
