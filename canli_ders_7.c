// Canlý Ders Uygulamasý - 7
// Girilen bir sayýnýn tek ya da çift sayý olduðunu bulur.
// TEK/ÇÝFT kavramlarýnýn matematiksel tanýmý kullanýldý.

#include<stdio.h>

main () {
     
     int sayi;
     
     printf("Sayinizi giriniz: ");
     scanf("%d", &sayi);
     
     if(sayi%2 == 0)
       printf("%d sayisi cift sayidir.", sayi);
       
     else
       printf("%d sayisi tek sayidir.", sayi);
     
     getch();
     
} 
