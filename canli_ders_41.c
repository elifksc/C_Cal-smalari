// Canl� Ders Uygulamas� - 41
// Rastgele 10 tane tam say� �retir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int ali, i;
     srand(time(NULL));
     
     for(i=1; i<=10; i++) {
        ali = rand();       //  0 - 32767 aras�nda rastgele i kadar tamsay� �retir.
        printf("%d ", ali);
     }
     
     getch();
}
