// Canl� Ders Uygulamas� - 39
// Kullan�c�n�n girdi�i bir tamsay�n�n karek�k�n� hesaplar.
// sqrt() fonksiyonu kullanmadan

#include <stdio.h>

main () {
     
     int sayi, i;
     
     printf("Karekokunu hesaplatmak istediginiz sayiyi giriniz: ");
     scanf("%d", &sayi);
     
     for(i=0; i*i<=sayi; i++);
     
     printf("Karekok = %d", i-1);

     getch();
}
