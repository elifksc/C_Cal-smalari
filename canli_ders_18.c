// Canlý Ders Uygulamasý - 18
// Ekrana girilen sayýdan 0'a kadar olan sayýlarý yazdýrýr.

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
