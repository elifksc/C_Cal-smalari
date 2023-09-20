// Canlý Ders Uygulamasý - 51
// Girilen iki sayý arasýnda, rakamlarýnýn toplamý 25'ten büyük olan kaç tane çift sayý vardýr.

#include <stdio.h>

main () {
     
     int s1, s2, i, toplam, depo, adet = 0;
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &s1, &s2);
     
     
     for(i=s1; i<=s2; i++){
         
         toplam = 0;
         depo = i; 
         
         while(depo > 0){
            
            toplam = toplam + depo % 10; // birler basamaðýný topluyoruz.
            depo = depo/10;              // birler basamaðýný atýyoruz.  
         }  
         
         if(toplam > 25 && i % 2 == 0){
           printf("%4d ", i);
           adet++;
         }        
     
     }
     printf("\n\nAradiginiz kritere uygun %d adet sayi vardir.", adet);
     
     getch();
}
