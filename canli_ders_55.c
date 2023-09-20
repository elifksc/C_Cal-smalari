// Canlý Ders Uygulamasý - 55
// Belirtilen adet kadar rastgele rakam üretir, ardýndan bunlar arasýnda istenen rakamý iþaretler.

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
