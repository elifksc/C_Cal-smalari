// Canlý Ders Uygulamasý - 21
// 1'den girilen sayýya kadar olan sayýlarýn çarpýmýný bulur.
// YA DA girilen bir sayýnýn faktöriyelini hesaplar.

#include<stdio.h>

main () {
     
     int sayi, depo;
     long long int carpim = 1;
     
     printf("Sayi giriniz: ");
     scanf("%d", &sayi);
     
     depo = sayi;
     
     while (sayi > 0){
        
        carpim = carpim * sayi;
        sayi--;   
     }
       
     if(depo >= 0)
       printf("%d! = %lld", depo, carpim);
       
     else
       printf("Tanimsizdir.");
     
     getch();
}
