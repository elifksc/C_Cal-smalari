// Canlý Ders Uygulamasý - 34
// scanf fonksiyonu ile tek bir karakter okuma
// PROBLEMLÝ
// Enter 2 karakter'dir. 2 sayý girip enter yapýnca karaktere de deðer atanmýþ gibi oluyor bu sebeple sorun çýkýyor.
#include<stdio.h>

main () {
     
     int sayi1, sayi2;
     char ali; 
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &sayi1, &sayi2);
     
     printf("Bir karakter giriniz: ");
     scanf("%c", &ali);
     
     printf("\n%d %d %c", sayi1, sayi2, ali);

     getch();
}
