// Canlý Ders Uygulamasý - 68
// Girilen iki basamaklý on pozitif tam sayý arasýndaki birbirine en yakýn sayý çiftini bulur.

#include<stdio.h>

main(){
       int dizi[10], i, j, depo, fark = 100, ilk;
       
       printf("Sayilari giriniz: ");
       
       for(i=0; i<10; i++)
          scanf("%d", &dizi[i]);
       
       for(i=0; i<10; i++){
          for(j=0; j<9; j++){
             
             if(dizi[j] > dizi[j+1]){
               
               depo = dizi[j];
               dizi[j] = dizi[j+1];
               dizi[j+1] = depo;     
             }
          }
       }   
       
       for(i=0; i<9; i++){
  
          if(dizi[i+1] - dizi[i] < fark){
            fark = dizi[i+1] - dizi[i];
            ilk = i;      
          }
       }
  
       printf("Sayi cifti: %d %d", dizi[ilk], dizi[ilk+1]);
       getch();
}
