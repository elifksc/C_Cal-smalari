// Canl� Ders Uygulamas� - 34
// scanf fonksiyonu ile tek bir karakter okuma
// PROBLEML�
// Enter 2 karakter'dir. 2 say� girip enter yap�nca karaktere de de�er atanm�� gibi oluyor bu sebeple sorun ��k�yor.
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
