// Canl� Ders Uygulamas� - No: 100
// Be� tane rastgele rakam �retir, bas�lan tu�a kar��l�k gelen say� dizisinin
// eleman�n� dizinin ba��na al�r, dizi k���kten b�y��e s�raland���nda sonlan�r.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
       int dizi[6], i, hata, tus, depo;
       srand(time(NULL));
       
       for(i=1; i<6; i++){
          dizi[i] = rand() % 10;
          printf("%d ", dizi[i]);      
       }
       
       while(1){
            
            hata = 0;
            
            for(i=1; i<5; i++){
               if(dizi[i] > dizi[i+1])
                 hata = 1;
            }
            
            if(hata == 0)
              break;
            
            tus = getch() - 48;
            
            if(tus > 0 && tus < 6){
              
              depo = dizi[tus];
              
              for(i=tus; i>1; i--)
                 dizi[i] = dizi[i-1];
              
              dizi[1] = depo;
              
              printf("\n");
              
              for(i=1; i<6; i++)
                 printf("%d ", dizi[i]);
              
            }      
       }
       
       printf("\n\nBitti.");
       getch();
       
}
