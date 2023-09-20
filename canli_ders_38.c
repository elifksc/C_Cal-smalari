// Canlý Ders Uygulamasý - 38
// Kullanýcýnýn girdiði basamak sayýsýna sahip en büyük asal sayýyý ekrana yazdýrýr.

#include<stdio.h>

main () {
     
     long long int bolen, i, katsayi = 1, kackez = 0;
     int asal, basamak;
     
     printf("Kac basamakli bir asal sayi ariyorsunuz: ");
     scanf("%d", &basamak);
     
     
     for(i=1; i<=basamak; i++)
        katsayi = katsayi * 10;     
     
     for(i=katsayi; i>=2; i--){
                    
        asal = 1;
                    
        for(bolen=2; bolen<=i/2; bolen++){
           
           kackez++;
           
            if(i % bolen == 0){  
               asal = 0;
               break;
            }             
        }
        
        if(asal == 1){
          printf("%lld - ASAL SAYIDIR.\n", i);
          break;
        }
     }               
     printf("Su kadar dondum = %lld", kackez);
     getch();
}
