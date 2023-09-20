// Canlý Ders Uygulamasý - 57
// Girilen birbirinden farklý yedi tam sayýnýn ortancasýný bulur.

#include <stdio.h>

main(){
       
       int dizi[7], i, j, depo;
       printf("Yedi farkli sayi giriniz: ");
       
       for(i=0; i<7; i++)
          scanf("%d", &dizi[i]);      
                
       for(i=0; i<7; i++){
          
          for(j=0; j<6; j++){
             
             if(dizi[j] > dizi[j+1]){ 
                               
               depo = dizi[j];
               dizi[j] = dizi[j+1];
               dizi[j+1] = depo;
             }

          }
                   
       }
       printf("Ortanca sayi = %d", dizi[3]);
       getch();
}
