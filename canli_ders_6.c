// Canl� Ders Uygulamas� - 6
// Girilen not de�erinin ba�ar�l� m� ba�ar�s�z m� oldu�unu bulur.

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
