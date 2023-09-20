// Canl� Ders Uygulamas� - 71
// Girilen basamak say�s�na (en az 2, en �ok 8) sahip ve
// 0 rakam� i�ermeyen rastgele bir say� �retir, kom�u iki
// basama��ndaki rakamlar ayn� olana kadar her sat�rda sadece
// bir basama��ndaki rakam� de�itirir.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
       int basamak, dizi[8], rast1, rast2, i, cikis=0;
       srand(time(NULL));
       
       printf("Basamak sayisini giriniz: ");
       scanf("%d", &basamak);
       printf("\n");
       
       for(i=0; i<basamak; i++){
                
          dizi[i] = 1 + rand() % 9;
          printf("%d", dizi[i]);
       }
       
       while(1){
            
            for(i=0; i<basamak-1; i++){
                     
               if(dizi[i] == dizi[i+1])
                  cikis=1; 
            }    
            
            if(cikis == 1)
              break;
              
            while(1){
                 
                 rast1 = rand() % basamak;
                 rast2 = 1 + rand() % 9;
                 
                 if(dizi[rast1] != rast2){
                    dizi[rast1] = rast2;
                    break;
                 }
            }
            printf("\n");
            
            for(i=0; i<basamak; i++)
               printf("%d", dizi[i]);
       }
       
       getch();
}
