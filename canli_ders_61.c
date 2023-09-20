// Canlý Ders Uygulamasý - No: 061
// 2019-20 - Final Yeterlilik Sýnavý - Soru 1

// Girilen bir doðal sayýnýn (maksimum 18 basamaklý) rakamlarýný
// kullanarak oluþturabilecek en büyük doðal sayýyý yazdýrýr.

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
     
     // 0 için çalýþmaz 
     
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

