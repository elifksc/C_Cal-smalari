// Canl� Ders Uygulamas� - 63
// Girilen (maksimum 9 basamakl�) bir say�n�n rakamlar�ndan hareketle
// abak�s g�r�n�m�ne benzer bir desen olu�turur.

#include <stdio.h>

main(){
       
       int sayi, basamak[9], i, j, depo, adet=0, maks = 0;
       
       printf("Sayi giriniz: ");
       scanf("%d", &sayi);
       
       depo = sayi;
       
       //basamak say�s�n� buldum ve rakamlar� diziye att�m 
       
       while(depo > 0){       
            basamak[adet] = depo % 10;
            depo = depo /10;
            adet++;
       }
       
       printf("%d \n", adet);
       // maksimum de�eri buldum.
       
       for(j=0; j<adet; j++){
          if(basamak[j] > maks)
             maks = basamak[j];     
       }
       
       printf("%d \n", maks);
       
       // diziyi tersten yazd�rd�m.
       for(i=adet-1; i>=0; i--){
          if(basamak[i] != 0)     
            printf("%d ", basamak[i]);
       }
       printf("\n\n");
       
       // y�ld�z basma
       for(i=0; i<maks; i++){         // i = 0       ; 1
           for(j=adet-1; j>=0; j--){  // j = 2,1,0   ;  2,1,0
                                          
              if(i < basamak[j])
                printf("* ");
              else
                printf("  ");      
           }
           
           printf("\n"); 
       }
       getch();
} 
