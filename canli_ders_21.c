// Canl� Ders Uygulamas� - 21
// 1'den girilen say�ya kadar olan say�lar�n �arp�m�n� bulur.
// YA DA girilen bir say�n�n fakt�riyelini hesaplar.

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
