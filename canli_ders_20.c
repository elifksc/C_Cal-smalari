// Canl� Ders Uygulamas� - 20
// Girilen iki tamsayi aras�ndaki say�lar�n toplam�n� bulur

#include<stdio.h>

main () {
     
     int sayi1, sayi2, toplam = 0, depo;
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &sayi1, &sayi2);
     
     if(sayi1 > sayi2){
       depo = sayi1;
       sayi1 = sayi2;
       sayi2 = depo;        
     }
     
     while (sayi1 <= sayi2){
        
        toplam = toplam + sayi1;
        sayi1++;   
     }
     
     printf("Sonuc= %d", toplam);
     
     getch();
}
