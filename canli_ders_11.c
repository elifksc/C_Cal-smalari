// Canlý Ders Uygulamasý - 11
// Girilen iki sayýdan herhangi birinin diðerinin tam katý olup olmadýðýný bulur.

#include<stdio.h>

main () {
     
     int s1, s2, depo;
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &s1, &s2);
     
     if (s1 < s2){
       depo = s1;
       s1 = s2;
       s2 = depo;
     }
     
     if (s1 % s2 == 0)
       printf("Tam Katidir.");
       
     else
       printf("Tam Katidir Degildir.");

     getch();
     
}
