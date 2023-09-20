// Canl� Ders Uygulamas� - No: 061
// 2019-20 - Final Yeterlilik S�nav� - Soru 1

// Girilen bir do�al say�n�n (maksimum 18 basamakl�) rakamlar�n�
// kullanarak olu�turabilecek en b�y�k do�al say�y� yazd�r�r.

/*

Sayinizi giriniz: 123456789012345678
Olusturabilecek en buyuk sayi: 988776655443322110

*/

#include <stdio.h>

main () {
     
     long long int sayi;
     int adetler[10] = {0}, i, j;
     
     // 1234
     
     printf ("Sayinizi giriniz: ");
     scanf ("%lld", &sayi);
     
     /*
     
     // 0 i�in �al��maz 
     
     while (sayi > 0) {
           
           adetler [sayi % 10] ++;
           sayi = sayi / 10; 
     }
     
     */
     
     do {
         
         adetler [sayi % 10] ++;
         sayi = sayi / 10;   
         
     } while (sayi != 0);
     
     printf ("Olusturabilecek en buyuk sayi: ");
     
     for (i=9; i>=0; i--) {
         
        for (j=1; j<=adetler[i]; j++)
            printf ("%d", i); 
     }

     getch ();
}

