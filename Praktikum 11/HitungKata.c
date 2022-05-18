/*Nama File 	: HitungKata*/
/*Deskripsi 	: Mesin abstrak untuk menghitung banyaknya kata yang ada pada pita*/
/*Pembuat   	: 24060121130050-Rizki Utama Fauzi*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/


#include <stdio.h>
#include <string.h>

int stringwordcount(char *s)
{
    int i,words=0;
	for(i=0;s[i];i++)
    {
    	if(s[i]==32)
    	 words++;

 	}
 	if(i>0)
      words++;

	return words;
}
int main()
{

    char s[200];
    int wordscount;

    printf("Masukan kata-kata: ");
    gets(s);


    wordscount=stringwordcount(s);
    printf("hasil hitung kata = %d\n",wordscount);

    getch();
    return 0;
}
