// Canlý Ders Uygulamasý - 60
// Belirtilen aralýkta istenen adet (en çok 10) kadar birbirlerinden farklý rastgele pozitif tam sayý üretir.
// Not: Girilen sayý aralýðý üst limitin 10000, geniþliðinin ise en az 10 olduðu varsayýlmaktadýr.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
     
     int dizi[10] = {0};
     int alt, ust, adet, rastgele, i, j, var;
     srand(time(NULL));
     
     printf("Sayi araligi giriniz: ");
     scanf("%d %d", &alt, &ust);
     
     printf("Adet giriniz: ");
     scanf("%d", &adet);
     
     
     for(i=0; i<adet; i++){      
                      
        rastgele = alt + rand() % (ust-alt+1);
        
        var = 0;
        
        for(j=0; j<=i; j++){
           if(dizi[j] == rastgele)
             var = 1;
        }
        
        if(var == 0){
          dizi[j] = rastgele;
          printf("%d ", rastgele);     
        }
        // i'yi azaltýyoruz çünkü dizi 10 elemanlý eðer 2. ürettiðim deðer daha önce yazýlmýþsa onu yazdýrmýycam o zaman
        // 2. indis boþ kalacak ve yeni üretilen sayý dizinin 3. indisine yazýlacak ama 2. indise yazýlmalý bu sebeple i azalmalý!
        else
          i--;
          
     }
     

     
     getch();
}
