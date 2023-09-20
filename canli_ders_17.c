// Canlý Ders Uygulamasý - 17
// Ekrana 0'dan girilen sayýya kadar olan (o sayý dahil) sayýlarý ekrana yazdýrýr.

#include<stdio.h>

main () {
     
     int sayi, sayac = 0;
     
     
     printf("Sayi giriniz: ");
     scanf("%d", &sayi);
     
     while (sayac <= sayi){
        
        printf("%d ", sayac);
        sayac++;   
     }
     
     getch();
}
