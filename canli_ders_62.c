// Canl� Ders Uygulamas� 62
// Belirtilen aral�ktaki say�lardan basamaklar�ndaki rakamlar
// birbirlerinden farkl� olanlar� yazd�r�r.

#include<stdio.h>

main(){
       int ilk, son, adetler[10], sayi, depo, i, isaret;
       
       printf("Sayi araligini giriniz: ");
       scanf("%d %d", &ilk, &son);
       
       for(sayi=ilk; sayi<=son; sayi++){
                  
           depo = sayi;
           
           //her turda dizi elemanlar� 0'lanmal�
           for(i=0; i<10; i++)
              adetler[i] = 0;
           
           while(depo > 0){
                adetler[depo % 10]++;
                depo = depo/10;
           }
           
           isaret = 0;
           
           for(i=0; i<10; i++){
              
              if(adetler[i] > 1)
                 isaret = 1;
           }
           
           if(isaret == 0)
             printf("%d ", sayi);
             
       }    
       getch();
}
