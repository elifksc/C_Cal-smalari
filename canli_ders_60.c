// Canl� Ders Uygulamas� - 60
// Belirtilen aral�kta istenen adet (en �ok 10) kadar birbirlerinden farkl� rastgele pozitif tam say� �retir.
// Not: Girilen say� aral��� �st limitin 10000, geni�li�inin ise en az 10 oldu�u varsay�lmaktad�r.

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
        // i'yi azalt�yoruz ��nk� dizi 10 elemanl� e�er 2. �retti�im de�er daha �nce yaz�lm��sa onu yazd�rm�ycam o zaman
        // 2. indis bo� kalacak ve yeni �retilen say� dizinin 3. indisine yaz�lacak ama 2. indise yaz�lmal� bu sebeple i azalmal�!
        else
          i--;
          
     }
     

     
     getch();
}
