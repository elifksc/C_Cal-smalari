// Canlý Ders Uygulamasý - 25
// Girilen bir sayýnýn faktöriyelini hesaplar (for döngüsü ile).

#include<stdio.h>

main () {
     
     int sayi, i; 
     long long int carpim = 1;
     
     printf("Sayi giriniz: ");
     scanf("%d", &sayi);
     
     for(i=1; i<=sayi; i++)
        carpim = carpim * i;
     
     
     printf("%d! = %lld", sayi, carpim);
     
     getch();
}
