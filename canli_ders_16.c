// Canlý Ders Uygulamasý - 16
// Girilen adet kadar ekrana "Dersten X. Kez Kaldim" kelimesini yazdýrýr.

#include<stdio.h>

main () {
     
     int adet, sayac = 1;
     
     
     printf("Adet giriniz: ");
     scanf("%d", &adet);
     
     while(sayac <= adet){
          
          printf("Dersten %d. Kez Kaldim.\n", sayac);
          sayac++;                     
     }
     

     getch();
     
}
