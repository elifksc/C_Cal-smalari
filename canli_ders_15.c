// Canlý Ders Uygulamasý - 15
// Girilen adet kadar ekrana "Merhaba" kelimesini yazdýrýr.

#include<stdio.h>

main () {
     
     int adet, sayac = 0;
     
     
     printf("Adet giriniz: ");
     scanf("%d", &adet);
     
     while(sayac < adet){
          
          printf("Merhaba\n");
          sayac++;                     
     }
     

     getch();
     
}
