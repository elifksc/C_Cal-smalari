// Canl� Ders Uygulamas� - 75
// -1 yazana kadar girilen birbirlerinden farkl�
// rakamlar� (en �ok 10 tane), her birinden toplamda ��er adet
// olacak �ekilde ve rastgele s�rada tekrar yazd�r�r.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
       
       int rakam, adetler[10]={0}, rastgele, tane=0;
       srand(time(NULL));
       
       printf("Rakamlari giriniz: ");
       
       while(1){
                
            scanf("%d", &rakam);
            
            if(rakam == -1)
              break;
            
            adetler[rakam] = 3;
            tane++;
       }
       
       tane = tane*3;
       printf("Rastgele dizilimi: ");
       
       while(tane>0){
            
            rastgele = rand() % 10;
            
            if(adetler[rastgele] > 0){
              
              printf("%d ", rastgele);
              adetler[rastgele]--;
              tane--;
            }
       }
       
       getch();       
}
