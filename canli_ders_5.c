// Canlý Ders Uygulamasý - 5
// Girilen üç sayýnýn aritmetik ortalamasýný hesaplar.

#include<stdio.h>

main () {
     
     float a, b, c;
     
     printf("Lutfen uc sayi giriniz: ");
     scanf("%f %f %f", &a, &b, &c);
     
     printf("Girilen uc sayinin aritmetik ortalamasi= %.2f", (a+b+c)/3);


     getch();
     
} 
