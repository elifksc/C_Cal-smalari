// Canlý Ders Uygulamasý - 56
// Belirtilen aralýktaki pozitif tam sayýlarý, gizlemek istenilen rakam yerin X koyarak listeler.

#include <stdio.h>

main(){
       
       int ilk, son, gizli, sayi, dizi[10], i, adet;
       
       printf("Sayi araligini giriniz: ");
       scanf("%d %d", &ilk, &son);
       
       printf("Gizlemek istediginiz rakami giriniz: ");
       scanf("%d", &gizli);
       
       for(i=ilk; i<=son; i++){
       
           sayi = i;
           adet = 0;
           
           // basamaklarýna ayýr ve diziye ata.
           while(sayi > 0){
                
                dizi[adet] = sayi  % 10;
                sayi = sayi / 10;
                adet++;         
           }
           
           // diziye bak gizlenmek istenen rakam varsa yerine X yoksa kendini yaz.
           while(adet > 0){
                
                if(dizi[adet-1] == gizli)
                  printf("X");
                  
                else
                  printf("%d", dizi[adet-1]);
           
                adet--;
           }
           
           printf("  ");
           
       }
       
       getch();
}
