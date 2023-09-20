// Canlý Ders Uygulamasý - 73
// Ardýþýk iki poziti tam sayýnýn çarpýmý olarak ifade edilen sayýlara
// karemsi sayý denir. Bu tanýma göre; girilen bir aralýkta (bu deðerler dahil)
// kaç tane karemsi sayý olduðunu bulur.

#include <stdio.h>

main(){
       
       int baslangic, bitis, sayi, adet = 0, carpan;
       
       printf("Sayi araligini giriniz: ");
       scanf("%d %d", &baslangic, &bitis);
       
       for(sayi=baslangic; sayi<=bitis; sayi++){
       
          for(carpan=1; carpan*(carpan+1)<sayi; carpan++);
              
              if(carpan * (carpan+1) == sayi)
                adet++;                 
       }
       
       printf("Ilgili araliktaki karemsi sayi adedi = %d", adet);
       getch();
       
}
