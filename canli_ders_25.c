// Canl� Ders Uygulamas� - 25
// Girilen bir say�n�n fakt�riyelini hesaplar (for d�ng�s� ile).

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
