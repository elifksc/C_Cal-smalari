// Canl� Ders Uygulamas� - 9
// Girilen �� say� aras�nda tekrar eden olup olmad���n� bulur.

#include<stdio.h>

main () {
     
     int s1, s2, s3;
     
     printf("Uc sayi giriniz: ");
     scanf("%d %d %d", &s1, &s2, &s3);
     
     if (s1 == s2 || s2 == s3 || s1 == s3)
       printf("Tekrar var.");
       
     else
       printf("Tekrar yok.");

     getch();
     
}
