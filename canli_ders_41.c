// Canlý Ders Uygulamasý - 41
// Rastgele 10 tane tam sayý üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int ali, i;
     srand(time(NULL));
     
     for(i=1; i<=10; i++) {
        ali = rand();       //  0 - 32767 arasýnda rastgele i kadar tamsayý üretir.
        printf("%d ", ali);
     }
     
     getch();
}
