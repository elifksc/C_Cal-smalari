// Canl� Ders Uygulamas� - 73
// Ard���k iki poziti tam say�n�n �arp�m� olarak ifade edilen say�lara
// karemsi say� denir. Bu tan�ma g�re; girilen bir aral�kta (bu de�erler dahil)
// ka� tane karemsi say� oldu�unu bulur.

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
