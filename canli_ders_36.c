// Canl� Ders Uygulamas� - 36
// Kullan�c�n�n girdi�i iki say�n�n EKOK'unu hesaplar.
// FOR D�NG�S�
// Ortak kat en fazla girilen say�lar�n �arp�m�d�r. 


#include<stdio.h>

main () {
     
     int a, b, i, ekok;
     
     printf("Iki sayi giriniz: ");
     scanf("%d %d", &a, &b);
     
     // D�ng�de ilk bulunan en k���kt�r devam ederse en sonuncu bulunur.
     
     for(i=a; i<=a*b; i++){
        
        if(i%a == 0 && i%b == 0){  
          ekok = i;
          break;
        }      
     } 
     
     printf("EKOK (%d %d) = %d", a, b, ekok);

     getch();
}
