// Canlý Ders Uygulamasý - 79
// -1 yazýlana kadar girilen iki basamaklý sayýlarý
// en çok tekrar edenden en az tekrar eden sayýya doðru tekrar
// adedince (ayný tekrar adedinde küçükten büyüðe) sýralar.

#include<stdio.h>

main(){
       int adetler[100] = {0}, sayi, adet, i, j;
       
       printf("Sayilari giriniz: ");
       
       while(1){
            
            scanf("%d", &sayi);
            
            if(sayi == -1)
              break;
            
            adetler[sayi]++;
       }
       
       printf("Tekrar siralamasi: ");
       
       for(adet=100; adet>=1; adet--){
          
          for(i=10; i<=99; i++){
             
             if(adetler[i] == adet){
               
               for(j=1; j<=adetler[i]; j++)
                  printf("%d ", i);
             }      
          }   
             
       }
       getch();
} 
