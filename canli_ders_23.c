// Canl� Ders Uygulamas� - 23
// Girilen bir say�n�n ka� basamakl� oldu�unu bulur.
// Magazinsel Ad�: NUSRET Y�NTEM�

#include<stdio.h>

main () {
     
     int sayi, depo, sayac = 0;
     
     printf("Sayi giriniz: ");
     scanf("%d", &sayi);
     
     depo = sayi;
     
     while(sayi > 0){
        
        sayi = sayi / 10;
        sayac++;
     
     }
     
     if (depo != 0)
       printf("%d sayisi %d basamaklidir.", depo, sayac);
     
     else
       printf("0 sayisi 1 basamaklidir.");
     
     getch();
}
