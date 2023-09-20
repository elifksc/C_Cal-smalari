// Canlý Ders Uygulamasý - 40
// Kullanýcýnýn girdiði bir tamsayýyý 5'in en yakýn katýna yuvarlar

#include <stdio.h>

main () {
     
     int sayi, birler;
     
     printf("Sayinizi giriniz: ");
     scanf("%d", &sayi);
     
     birler = sayi % 10;
     
     if(birler<3)
       sayi = sayi - birler;
     
     else if(birler<8)
       sayi = sayi - birler + 5;
       
     else
       sayi = sayi - birler + 10;
     
     printf("Yuvarlatilmis Hali = %d", sayi);
     
     getch();
}
