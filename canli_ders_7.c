// Canl� Ders Uygulamas� - 7
// Girilen bir say�n�n tek ya da �ift say� oldu�unu bulur.
// TEK/��FT kavramlar�n�n matematiksel tan�m� kullan�ld�.

#include<stdio.h>

main () {
     
     int sayi;
     
     printf("Sayinizi giriniz: ");
     scanf("%d", &sayi);
     
     if(sayi%2 == 0)
       printf("%d sayisi cift sayidir.", sayi);
       
     else
       printf("%d sayisi tek sayidir.", sayi);
     
     getch();
     
} 
