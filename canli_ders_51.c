// Canl� Ders Uygulamas� - 51
// Girilen iki say� aras�nda, rakamlar�n�n toplam� 25'ten b�y�k olan ka� tane �ift say� vard�r.

#include <stdio.h>

main () {
     
     int s1, s2, i, toplam, depo, adet = 0;
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &s1, &s2);
     
     
     for(i=s1; i<=s2; i++){
         
         toplam = 0;
         depo = i; 
         
         while(depo > 0){
            
            toplam = toplam + depo % 10; // birler basama��n� topluyoruz.
            depo = depo/10;              // birler basama��n� at�yoruz.  
         }  
         
         if(toplam > 25 && i % 2 == 0){
           printf("%4d ", i);
           adet++;
         }        
     
     }
     printf("\n\nAradiginiz kritere uygun %d adet sayi vardir.", adet);
     
     getch();
}
