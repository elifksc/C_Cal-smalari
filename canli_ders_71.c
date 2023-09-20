// Canlý Ders Uygulamasý - 71
// Girilen basamak sayýsýna (en az 2, en çok 8) sahip ve
// 0 rakamý içermeyen rastgele bir sayý üretir, komþu iki
// basamaðýndaki rakamlar ayný olana kadar her satýrda sadece
// bir basamaðýndaki rakamý deðitirir.

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
