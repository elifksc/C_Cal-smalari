// Canlý Ders Uygulamasý - No: 095
// Girilen ve 0-1'lerden oluþan rakam bloðundaki 1 rakamlarýndan 
// oluþan en uzun bloðun uzunluðunu bulur.
// Boþluksuz versiyon. Enter tuþuna basýlana kadar / Dizi + Harici dosya iþlemi kullanmadan
// Kare Karalamaca Bulmacasý / Nonogram / Picros

#include <stdio.h>
 
main () {
 
     char rakam;
     int uzunluk = 0, maks = 0;
     
     printf ("Rakam blogunu (0 ya da 1) giriniz: ");
     
     while (1) {
     
           rakam = getch ();
     
           if(rakam == '\r')
              break;
    
           if(rakam == '1') {
                    
              uzunluk ++;
              printf ("1");
           }
     
           if(rakam == '0') {
                    
             uzunluk = 0;
             printf ("0");
           }
     
          if(uzunluk > maks)
            maks = uzunluk;
     }
     
     printf ("\nMaksimum uzunluk = %d", maks);
     getch (); 
}
