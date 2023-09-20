// Canlý Ders Uygulamasý - 8
// Girilen üç sayý arasýndaki en büyük sayýyý bulur.

#include<stdio.h>

main () {
     
     int a, b, c, taht, taht2, ortanca;
     
     printf("Lutfen uc sayi giriniz: ");
     scanf("%d %d %d", &a, &b, &c);
     
     taht = a;
     
     if (b > taht)
       taht = b;
       
     if (c > taht)
       taht = c;
      
     printf("Girilen uc sayi arasindaki en buyuk sayi = %d\n", taht);
     
     getch();
     
}
