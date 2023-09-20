// Canlý Ders Uygulamasý - 10
// Girilen iki sayýdan ilkinin ikincisinin tam katý olup olmadýðýný bulur.

#include<stdio.h>

main () {
     
     int s1, s2;
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &s1, &s2);
     
     if (s2 % s1 == 0)
       printf("%d sayisi %d sayisinin tam katidir.", s2, s1);
       
     else
       printf("%d sayisi %d sayisinin tam kati degildir.", s2, s1);

     getch();
     
}
