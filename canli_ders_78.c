// Canl� Ders Uygulamas� - 78
// Girilen aral�kta (bu de�erler dahil) ka� tane
// tersipis say� oldu�unu bulur. Not: Bir say� tersten yaz�ld���nda de�er kaybediyorsa
// o say�ya tersipis say� denir.

#include<stdio.h>

main(){
       int baslangic, bitis, sayi, depo, adet=0, tersi, birler;
       
       printf("Once baslangic sonra bitis degerini giriniz: ");
       scanf("%d %d", &baslangic, &bitis);
       
       for(sayi=baslangic; sayi<=bitis; sayi++){
          
          depo = sayi;
          tersi = 0;
          
          while(depo>0){
               
               birler = depo % 10;
               tersi = tersi * 10 + birler;
               depo = depo / 10;
          }
          
          if(sayi > tersi)
            adet++;
       }
       
       printf("Tersipis sayi adedi = %d", adet);
       getch();
} 
