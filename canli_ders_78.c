// Canlý Ders Uygulamasý - 78
// Girilen aralýkta (bu deðerler dahil) kaç tane
// tersipis sayý olduðunu bulur. Not: Bir sayý tersten yazýldýðýnda deðer kaybediyorsa
// o sayýya tersipis sayý denir.

#include<stdio.h>

main(){
       int baslangic, bitis, sayi, depo, adet=0, tersi, birler;
       
       printf("Once baslangic sonra bitis degerini giriniz: ");
       scanf("%d %d", &baslangic, &bitis);
       
       for(sayi=baslangic; sayi<=bitis; sayi++){
          
          depo = sayi;
          tersi = 0;
          
          while(depo>0){
               
               birler = depo % 10;
               tersi = tersi * 10 + birler;
               depo = depo / 10;
          }
          
          if(sayi > tersi)
            adet++;
       }
       
       printf("Tersipis sayi adedi = %d", adet);
       getch();
} 
