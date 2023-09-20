// Canl� Ders Uygulamas� - No: 095
// Girilen ve 0-1'lerden olu�an rakam blo�undaki 1 rakamlar�ndan 
// olu�an en uzun blo�un uzunlu�unu bulur.
// Bo�luksuz versiyon. Enter tu�una bas�lana kadar / Dizi + Harici dosya i�lemi kullanmadan
// Kare Karalamaca Bulmacas� / Nonogram / Picros

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
