// Canl� Ders Uygulamas� - 17
// Ekrana 0'dan girilen say�ya kadar olan (o say� dahil) say�lar� ekrana yazd�r�r.

#include<stdio.h>

main () {
     
     int sayi, sayac = 0;
     
     
     printf("Sayi giriniz: ");
     scanf("%d", &sayi);
     
     while (sayac <= sayi){
        
        printf("%d ", sayac);
        sayac++;   
     }
     
     getch();
}
