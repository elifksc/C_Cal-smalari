// Canl� Ders Uygulamas� - 76
// Kullan�c�n�n girdi�i adet kadar ve �nceki �retti�inden
// s�ras�yla bir b�y�k bir k���k olmas� �art�yla; rastgele 3 basamakl� say�lar �retir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
       
       int adet, alt_limit = 100, ust_limit=999, isaret=1, rastgele;
       srand(time(NULL));
       
       printf("Sayi adedini giriniz: ");
       scanf("%d", &adet);
       
       while(adet>0){
          
          rastgele = alt_limit + rand() % (ust_limit - alt_limit + 1);
          printf("%d ", rastgele);
          
          adet--;
          
          if(isaret == 1){
            
            ust_limit = 999;
            alt_limit = rastgele + 1;
            isaret = 2;
          }
          
          else {
            
            ust_limit = rastgele - 1;
            alt_limit = 100;
            isaret = 1;
          }
       
       
       
       
       }
       
       
       getch();       
}
