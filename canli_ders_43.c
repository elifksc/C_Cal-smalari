// Canlý Ders Uygulamasý - 43
// Girilen iki deðer arasýnda yine girilen adet kadar rastgele tam sayý üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int i, ali, adet, baslangic, bitis;
     srand(time(NULL));
     
     printf("Once baslangic sonra bitis degerlerini giriniz: ");
     scanf("%d %d", &baslangic, &bitis);
     
     printf("Sayi adedini giriniz: ");
     scanf("%d", &adet);
     
     for(i=1; i<=adet; i++){
                 
         ali = baslangic + rand() % (bitis - baslangic + 1);
         printf("%d ", ali);
              
     } 
        
        
     getch();
}
