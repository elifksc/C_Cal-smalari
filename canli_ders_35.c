// Canlý Ders Uygulamasý - 35
// Kullanýcýnýn girdiði iki sayý arasýndaki asal sayýlarý ekrana yazdýrýr.
// PROBLEM ÇÖZÜMÜ - 1. AÞAMA (Kolay versiyon): Girilen bir sayýnýn asal olup olmadýðýný
// ekrana yazdýrýr.

// TANIM 1: Sadece kendisine ve 1 sayýsýna kalansýz bölünebilen 1'den büyük pozitif tam sayýlardýr.
// TANIM 2: Asal sayýlar, sadece iki pozitif tam sayý böleni olan doðal sayýlardýr.

#include<stdio.h>

main () {
     
     int sayi1, bolen, asal;
     
     printf("Sayinizi giriniz: ");
     scanf("%d", &sayi1); 
     
     asal = 1;
     
     for(bolen=2; bolen<sayi1; bolen++){
         
         if(sayi1 % bolen == 0)
           asal = 0;
     
     }
     
     if(asal == 1 && sayi1 > 1)
       printf("%d sayisi ASALDIR.", sayi1);
       
     else
       printf("%d sayisi ASAL DEGILDIR.", sayi1);

     getch();
}
