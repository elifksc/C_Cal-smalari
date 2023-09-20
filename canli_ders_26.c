// Canlý Ders Uygulamasý - 26
// Girilen taban ve üs degerlerine göre oluþan üssel ifadeyi hesaplar (for döngüsü ile).

#include<stdio.h>

main () {
     
     int taban, us, i; 
     long long int carpim = 1;
     
     printf("Taban ve us degerlerini giriniz: ");
     scanf("%d %d", &taban, &us);
     
     for(i=1; i<=us; i++)
        carpim = carpim * taban;
     
     
     printf("Sonuc = %lld", carpim);
     
     getch();
}
