// Canl� Ders Uygulamas� - 79
// -1 yaz�lana kadar girilen iki basamakl� say�lar�
// en �ok tekrar edenden en az tekrar eden say�ya do�ru tekrar
// adedince (ayn� tekrar adedinde k���kten b�y��e) s�ralar.

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
