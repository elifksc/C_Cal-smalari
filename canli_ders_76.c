// Canlı Ders Uygulaması - 76
// Kullanıcının girdiği adet kadar ve önceki ürettiğinden
// sırasıyla bir büyük bir küçük olması şartıyla; rastgele 3 basamaklı sayılar üretir.

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
