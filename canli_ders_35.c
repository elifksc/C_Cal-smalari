// Canl� Ders Uygulamas� - 35
// Kullan�c�n�n girdi�i iki say� aras�ndaki asal say�lar� ekrana yazd�r�r.
// PROBLEM ��Z�M� - 1. A�AMA (Kolay versiyon): Girilen bir say�n�n asal olup olmad���n�
// ekrana yazd�r�r.

// TANIM 1: Sadece kendisine ve 1 say�s�na kalans�z b�l�nebilen 1'den b�y�k pozitif tam say�lard�r.
// TANIM 2: Asal say�lar, sadece iki pozitif tam say� b�leni olan do�al say�lard�r.

#include<stdio.h>

main () {
     
     int sayi1, bolen, asal;
     
     printf("Sayinizi giriniz: ");
     scanf("%d", &sayi1); 
     
     asal = 1;
     
     for(bolen=2; bolen<sayi1; bolen++){
         
         if(sayi1 % bolen == 0)
           asal = 0;
     
     }
     
     if(asal == 1 && sayi1 > 1)
       printf("%d sayisi ASALDIR.", sayi1);
       
     else
       printf("%d sayisi ASAL DEGILDIR.", sayi1);

     getch();
}
