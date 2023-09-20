// Canlý Ders Uygulamasý - No: 090
// Girilen bir kelimedeki küçük ve büyük harf sayýlarýný yazdýrýr.

#include <stdio.h>

main(){
       char kelime[100];
       int i, buyuk=0, kucuk=0;
       
       printf("Kelime Giriniz: ");
       scanf("%s", kelime);
       
       for(i=0; kelime[i] != '\0'; i++){
           
           if(kelime[i] >=65 && kelime[i] <= 90)
              buyuk++;
              
           if(kelime[i] >=97 && kelime[i] <= 122)
              kucuk++;
       }
       
       printf("Kucuk harf sayisi: %d\n", kucuk);
       printf("Buyuk harf sayisi: %d", buyuk);
       
       
       getch();
}
