// Canl� Ders Uygulamas� - 18
// Ekrana girilen say�dan 0'a kadar olan say�lar� yazd�r�r.

#include<stdio.h>

main () {
     
     int sayi;
     
     
     printf("Sayi giriniz: ");
     scanf("%d", &sayi);
     
     while (sayi >= 0){
        
        printf("%d ", sayi);
        sayi--;   
     }
     
     getch();
}
