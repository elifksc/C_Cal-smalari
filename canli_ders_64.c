// Canlý Ders Uygulamasý - 64
// Belirtilen kenar boyutuna sahip "O" karakterlerinden oluþan 
// bir kare deseninin içine istenen adet (maks. kenar x kenar) 
// kadar "X" karakterini rastgele yazdýrýr.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
       int dizi[101] =  {0} , boyut, adet, i, j, tane=1, rastgele;
       srand(time(NULL));
       
       printf("Kenar boyutunu giriniz: ");
       scanf("%d", &boyut);
       
       printf("X karakter sayisi giriniz: ");
       scanf("%d", &adet);
       
       // X koyulacak yerleri belirledim...
       
       for(i=0; i<adet; i++){
                
                rastgele = 1 + rand() % (boyut*boyut);
                
                if(dizi[rastgele] == 0)
                  dizi[rastgele] = 1;
                
                else
                  i--;
       }
       
       for(i=1; i<=boyut; i++){
          
          printf("\n");
          
          for(j=1; j<=boyut; j++){
              
              if(dizi[tane] == 0)
                printf("O ");
                
              else
                printf("X ");
                
              tane++;     
                   
          }
       }
       getch();
}
