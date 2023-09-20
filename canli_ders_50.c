// Canlý Ders Uygulamasý - 50
// Fibonacci dizisinin girilen adet kadar terimini ekrana yazar.
// 0 1 1 2 3 5 8 13 21 34 55 . . . 

#include <stdio.h>

main () {
     
     int ilk = 0, ikinci = 1, adet, i, depo;
     
     printf("Adet giriniz: ");
     scanf("%d", &adet);
     
     
     for(i=1; i<=adet; i++){
              
        printf("%d ", ilk);
         
        depo = ilk;
        ilk = ikinci;
        ikinci = depo + ikinci;      
     
     }

     getch();
}
