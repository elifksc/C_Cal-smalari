// Canlý Ders Uygulamasý - No: 053
// Diziye rastgele deðer atama
// 1-9 arasý rastgele rakamlardan oluþan 10 elemanlý bir dizi tanýmlar ve
// ekrana yazdýrýr.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
       
       int alper[10], i;
       
       for(i=0; i<10; i++)
          alper[i] = 1 + rand() % 9;
       
       for(i=0; i<10; i++)
          printf("%d ", alper[i]);
          
       getch();


}
