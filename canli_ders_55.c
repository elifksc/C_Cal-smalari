// Canl� Ders Uygulamas� - 55
// Belirtilen adet kadar rastgele rakam �retir, ard�ndan bunlar aras�nda istenen rakam� i�aretler.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
       
       int dizi[100], adet, i, isaret;
       srand(time(NULL));
       
       printf("Rakam adedini giriniz: ");
       scanf("%d", &adet);
       
       printf("Isaretlemek istediginiz rakami giriniz: ");
       scanf("%d", &isaret);
       
       printf("\n");
 
       for(i=0; i<adet; i++){
                
          dizi[i] = rand() % 10;
          printf("%d ", dizi[i]);
       }  
       
       printf("\n");
       
       for(i=0; i<=adet; i++){
                
          if(dizi[i] == isaret)
            printf("X ");
          
          else
            printf("  ");
       } 
      
        
       
       getch();

}
