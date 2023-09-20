// Canlý Ders Uygulamasý - 45
// Kullanýcýnýn 1-100 arasýnda tuttuðu bir sayýyý bilgisayar bulur.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int alt=1, ust=100, tahmin, yanit;
     srand(time(NULL));
     
     while(1){
              
         tahmin = alt + rand() % (ust-alt+1);
         
         printf("Tahminim = %d\n",tahmin);
         printf("Yanitiniz = ");
         scanf("%d", &yanit);
         
         if(yanit == 1)
           alt = tahmin+1;
         
         else if(yanit == 2)
           ust = tahmin-1;

         else{
           printf("AFERIN BILGISAYAR!");
           break;
         }
     }  
      
     getch();
}
