// Canl� Ders Uygulamas� - 22
// Girilen taban ve �s de�erlerinden hareketle olu�an �sl� ifadeyi hesaplar
// �rne�in 2 5 --> 2 x 2 x 2 x 2 x 2 = 32

#include<stdio.h>

main () {
     
     int taban, us, carpim = 1, depo;
     
     printf("Taban ve Us degerlerini giriniz: ");
     scanf("%d %d", &taban, &us);
     
     depo = us;
     
     if(us < 0)
       us = us * (-1);      
       
     while (us > 0){
          
          carpim = carpim * taban;
          us--;      
     }
     
     if (taban == 0 && depo == 0)
       printf("Tanimsizdir.");
     
     else if (depo >= 0)
       printf("Sonuc = %d", carpim);
       
     //(float) --> Bu ifade bellekte istedi�in bir yerde Float alan� a� hesapla ve buraya yaz demek!
       
     else
       printf("Sonuc = %f", (float)1/carpim);
       
     getch();
}
