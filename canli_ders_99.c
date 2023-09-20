// Canlý Ders Uygulamasý - No: 099
// 4x4 boyutlarýndaki bir matrisin her satýr ve her sütununda
// 1-4 arasýndaki rakamlarýn yalnýz birer kez kullanýlýp kullanýlmadýðýný bulur.

#include<stdio.h>
main(){
       int dizi[4][4], i, j, bir, iki, uc, dort, hata=0;
       
       // diziye deger atama
       
       for(i=0; i<4; i++){
             for(j=0; j<4; j++){
                 scanf("%d", &dizi[i][j]);
             }
       }
       
       //satýr bazlý kontrol
       
       for(i=0; i<4; i++){
                
             bir=0; iki=0; uc=0; dort=0;
                
             for(j=0; j<4; j++){
                      
                 switch(dizi[i][j]){
                       
                      case 1: bir++; break;
                      case 2: iki++; break;
                      case 3: uc++; break;
                      case 4: dort++; break;
                 }
             }
             if(bir != 1 || iki != 1 || uc != 1 || dort != 1 )
               hata = 1;
       }
       
       //satýr bazlý kontrol
       
       for(j=0; j<4; j++){
                
             bir=0; iki=0; uc=0; dort=0;
                
             for(i=0; i<4; i++){
                      
                 switch(dizi[i][j]){
                       
                      case 1: bir++; break;
                      case 2: iki++; break;
                      case 3: uc++; break;
                      case 4: dort++; break;
                 }
             }
             if(bir != 1 || iki != 1 || uc != 1 || dort != 1 )
               hata = 1;
       }
       
       if(hata == 0)
         printf("\nDOGRU MATRIS");
       else
         printf("\nHATALI MATRIS");
       
       
       getch();
}
