// Canl� Ders Uygulamas� - 40
// Kullan�c�n�n girdi�i bir tamsay�y� 5'in en yak�n kat�na yuvarlar

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
