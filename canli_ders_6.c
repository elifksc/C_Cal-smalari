// Canlý Ders Uygulamasý - 6
// Girilen not deðerinin baþarýlý mý baþarýsýz mý olduðunu bulur.

#include<stdio.h>

main () {
     
     int not;
     
     printf("Lutfen notunuzu giriniz: ");
     scanf("%d", &not);
     
     if(not>=50)
       printf("BASARILIDIR.");
       
     if(not<50)
       printf("BASARISIZDIR.");

     getch();
     
} 
