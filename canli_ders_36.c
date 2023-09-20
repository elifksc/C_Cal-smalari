// Canlý Ders Uygulamasý - 36
// Kullanýcýnýn girdiði iki sayýnýn EKOK'unu hesaplar.
// FOR DÖNGÜSÜ
// Ortak kat en fazla girilen sayýlarýn çarpýmýdýr. 


#include<stdio.h>

main () {
     
     int a, b, i, ekok;
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &a, &b);
     
     // Döngüde ilk bulunan en küçüktür devam ederse en sonuncu bulunur.
     
     for(i=a; i<=a*b; i++){
        
        if(i%a == 0 && i%b == 0){  
          ekok = i;
          break;
        }      
     } 
     
     printf("EKOK (%d %d) = %d", a, b, ekok);

     getch();
}
