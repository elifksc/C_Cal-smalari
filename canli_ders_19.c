// Canl� Ders Uygulamas� - 19
// 1'den girilen say�ya kadar olan say�lar�n toplam�n� bulur

#include<stdio.h>

main () {
     
     int sayi, sayac = 1, toplam = 0;
     
     
     printf("Sayi giriniz: ");
     scanf("%d", &sayi);
     
     while (sayac <= sayi){
        
        toplam = toplam + sayac;
        sayac++;   
     }
     
     printf("Sonuc= %d", toplam);
     getch();
}
