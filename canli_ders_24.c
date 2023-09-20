// Canlý Ders Uygulamasý - 24
// Girilen terim numarasýna karþýlýk gelen Fibonacci dizisindeki terimi bulur.
// 0 1 1 2 3 5 8 133 21 34

#include<stdio.h>

main () {
     
     int ilk = 0, ikinci = 1, terim, depo, sayac = 1;
     
     printf("Terim numarasini giriniz: ");
     scanf("%d", &terim);
     
     while(sayac <= terim){
        
        depo = ilk;
        ilk = ikinci;
        ikinci = depo + ikinci;
        
        sayac++;      
     }
     
     printf("Fibonacci dizisindeki %d. terim = %d", terim, ikinci - ilk);

     getch();
}
