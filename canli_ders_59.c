// Girilen bir sayýnýn yine girilen 8 tane sayýdan oluþan 
// bir dizideki sayýlardan hangisine daha yakýn olduðunu bulur.

#include <stdio.h>

main(){
       
       int sayi, dizi[8], fark[8], j, i, depo, depo1;
       
       printf("Sayinizi giriniz: ");
       scanf("%d", &sayi);
       
       printf("Sayi dizinizi giriniz: ");
       
       for(i=0; i<8; i++)
          scanf("%d", &dizi[i]);
          
       for(i=0; i<8; i++){       
          fark[i] = dizi[i] - sayi;
       }
       
       
       for(i=0; i<8; i++){    
          if(fark[i]<0)
            fark[i] = fark[i] * -1;
       }   
         
         
       for(i=0; i<8; i++){
                
          for(j=0; j<7; j++){
             
             if(fark[j] > fark[j+1]){
               
               depo1 = fark[j];
               fark[j] = fark[j+1];
               fark[j+1] = depo1; 
               
               depo = dizi[j];
               dizi[j] = dizi[j+1];
               dizi[j+1] = depo;         
             }
          }
       } 
       
       for(i=0; i<8; i++)
          printf("En yakin sayi = %d\n", dizi[i]);
          
       for(i=0; i<8; i++)
          printf("En yakin sayi = %d\n", fark[i]);
       
       getch();
}
