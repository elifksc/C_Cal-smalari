// Canl� Ders Uygulamas� - 37
// Kullan�c�n�n girdi�i iki say�n�n EBOB'unu hesaplar.

#include<stdio.h>

main () {
     
     int a, b, i, ebob;
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &a, &b);
     
     
     for(i=1; i<=a; i++){
        
        if(a%i == 0 && b%i == 0) 
          ebob = i; 
          
     } 
     
     printf("EBOB (%d %d) = %d", a, b, ebob);

     getch();
}
