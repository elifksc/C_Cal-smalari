// Canlý Ders Uygulamasý - 46
// Kullanýcýnýn seçtiði iþleme göre; rastgele bir islem sorusu üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int islem, sayi1, sayi2, gercek, yanit;
     srand(time(NULL));
     
     printf("Toplama (1), Cikarma(2), Carpma(3)\n");
     printf("Islem numaranizi seciniz = ");
     scanf("%d", &islem);
     
     sayi1 = 1 + rand() % 10;
     sayi2 = 1 + rand() % 10;
     
     switch(islem){
     
            case 1:
            printf("\n%d + %d = ", sayi1, sayi2);
            scanf("%d", &yanit);
            gercek = sayi1 + sayi2;
            break;
                   
            case 2:
            printf("\n%d - %d = ", sayi1, sayi2);
            scanf("%d", &yanit);
            gercek = sayi1 - sayi2;
            break;       
     
            case 3:
            printf("\n%d x %d = ", sayi1, sayi2);
            scanf("%d", &yanit);
            gercek = sayi1 * sayi2;
            break;
     }
     
     if(islem < 1 || islem > 3)
       printf("\nHatali bir tusa bastiniz!");
       
     else if(gercek == yanit)
       printf("\nTebrikler dogru yanit verdiniz."); 
     
     else
       printf("\nHatali yanit verdiniz."); 
       
     getch();
}
