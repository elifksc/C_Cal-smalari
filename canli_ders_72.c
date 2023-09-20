// Canlý Ders Uygulamasý - 72
// Girilen basamak sayýsýna (< 9) sahip rastgele bir sayý üretir,
// her satýrda sayýda olan rakamlardan sýrasýyla (0'dan 9'a kadar)
// birini "X" karakteriyle gizler.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
       int dizi[8], basamak, rastgele, i, j, var_mi;
       srand(time(NULL));
       
       printf("Basamak sayisini giriniz: ");
       scanf("%d", &basamak);
       printf("\n");
       
       for(i=0; i<basamak; i++){
           
          if(i == 0)
            rastgele = 1 + rand() % 9;
          else
            rastgele = rand() % 10;
       
          printf("%d", rastgele);
          dizi[i] = rastgele;
       }
       
       for(i=0; i<10; i++){
                
          var_mi = 0;
                
          for(j=0; j<basamak; j++){
             
             if(dizi[j] == i)
               var_mi = 1;
          }
          
          if(var_mi == 1){
                    
            printf("\n");
            
            for(j=0; j<basamak; j++){
               
               if(dizi[j] == i)
                 printf("X");
               
               else
                 printf("%d", dizi[j]);
            }
          }
       }
       getch();
}  
