// Canl� Ders Uygulamas� - 77
// Girilen aral�ktaki (bu say�lar dahil) ka� tane denk say� oldu�unu bulur.
// Not: Bir pozitif tam say�y� olu�turan rakamlardan tek olanlar�n say�s� �ift 
// olanlar�nkine e�itse, o say�ya denk say� denir.

#include<stdio.h>

main(){
       int baslangic, bitis, sayi, depo, tek, cift, adet=0, birler;
       
       printf("Once baslangic sonra bitis degerini giriniz: ");
       scanf("%d %d", &baslangic, &bitis);
       
       for(sayi=baslangic; sayi<=bitis; sayi++){
                           
           depo = sayi;
           tek=0;
           cift=0;
           
           while(depo>0){
                 
                 birler = depo % 10 ;
                 depo = depo / 10;
                 
                 if(birler % 2 == 0)
                   cift++;
                 
                 else
                   tek++;
           }
           
           if(tek == cift)
             adet++;
       }
       printf("Denk sayi adedi = %d", adet);
       
       getch();
} 
