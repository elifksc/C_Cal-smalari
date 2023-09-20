// Canlı Ders Uygulaması - 44
// Bilgisayarın 1-100 arasında tuttuğu bir sayıyı tahmin etme oyunu.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int bilgisayar, tahmin, adet = 0;
     srand(time(NULL));
     
     bilgisayar = 1 + rand() % 100;
     
     while(adet < 10){
               
         printf("%d. tahmininizi giriniz: ", adet+1);
         scanf("%d", &tahmin);
         adet++;
         
         if(tahmin > bilgisayar){
           printf("DAHA DUSUK");
           printf(" - Kalan tahmin hakkin = %d\n\n", 10-adet);
         }
         
         else if (tahmin < bilgisayar){
           printf("DAHA YUKSEK");
           printf(" - Kalan tahmin hakkin = %d\n\n", 10-adet);
         }
             
         else{
           printf("TEBRIKLER BILDIN!");
           break;
         }
     }
     
     if(tahmin != bilgisayar)
        printf("Tahmin hakkin tukendi.. KAYBETTIN !");
        
        
     getch();
}
