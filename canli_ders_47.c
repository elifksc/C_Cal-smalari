// Canlý Ders Uygulamasý - 47
// Bir madeni parayý kullanýcýnýn istediði adet kadar atar ve yazý / tura yüzdelerini gösterir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int adet, i, para, tura = 0, yazi = 0;
     srand(time(NULL));

     printf("Madeni parayi kac defa atmak istiyorsunuz: ");
     scanf("%d", &adet);

     for(i=1; i<=adet; i++){
              
          para = rand() % 2;
          
          if(para == 0)
            tura++;    
     
          else
            yazi++; 
     }
     
     printf("Tura yuzdesi = %.2f\n", 100 * (float)tura/adet);
     printf("Yazi yuzdesi = %.2f", 100 * (float)yazi/adet);  
     
     getch();
}
