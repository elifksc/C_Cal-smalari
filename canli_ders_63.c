// Canlý Ders Uygulamasý - 63
// Girilen (maksimum 9 basamaklý) bir sayýnýn rakamlarýndan hareketle
// abaküs görünümüne benzer bir desen oluþturur.

#include <stdio.h>

main(){
       
       int sayi, basamak[9], i, j, depo, adet=0, maks = 0;
       
       printf("Sayi giriniz: ");
       scanf("%d", &sayi);
       
       depo = sayi;
       
       //basamak sayýsýný buldum ve rakamlarý diziye attým 
       
       while(depo > 0){       
            basamak[adet] = depo % 10;
            depo = depo /10;
            adet++;
       }
       
       printf("%d \n", adet);
       // maksimum deðeri buldum.
       
       for(j=0; j<adet; j++){
          if(basamak[j] > maks)
             maks = basamak[j];     
       }
       
       printf("%d \n", maks);
       
       // diziyi tersten yazdýrdým.
       for(i=adet-1; i>=0; i--){
          if(basamak[i] != 0)     
            printf("%d ", basamak[i]);
       }
       printf("\n\n");
       
       // yýldýz basma
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
