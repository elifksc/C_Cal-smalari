// Canl� Ders Uygulamas� - 42
// Rastgele 10 tane tam say� (pozitif veya negatif) �retir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int ali, i, isaret;
     srand(time(NULL));
     
     for(i=1; i<=10; i++) {
              
        ali = rand();
        isaret = rand();
        
        if(isaret % 2 == 0)
          ali = ali * (-1);
        
        printf("%d ", ali);
     }
     
     getch();
}
