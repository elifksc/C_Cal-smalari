// Canlý Ders Uygulamasý - 39
// Kullanýcýnýn girdiði bir tamsayýnýn karekökünü hesaplar.
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
