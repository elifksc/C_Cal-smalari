// Canlý Ders Uygulamasý - 32
// Girilen kenar uzunluðuna göre; dikey simetriði alýnmýþ bir ikizkenar dik üçgen oluþturur.

/*
           
        *             1. SATIRDA 4 ADET BOÞLUK 1 ADET * VAR       
      * * *           2. SATIRDA 3 ADET BOÞLUK 3 ADET * VAR    
    * * * * *         3. SATIRDA 2 ADET BOÞLUK 5 ADET * VAR
  * * * * * * *       4. SATIRDA 1 ADET BOÞLUK 7 ADET *                        . 
* * * * * * * * *     5. SATIRDA 0 ADET BOÞLUK 9 ADET * VAR   

*/

#include<stdio.h>

main () {
     
     int yukseklik, i, j; 
     
     printf("Yukseklik degerini giriniz: ");
     scanf("%d", &yukseklik);
     
     printf("\n");
     
     printf("HAYIRLI CUMALAR\n");


     for(i=1; i<=yukseklik; i++){
                  
        printf("\n");
        
        for(j=1; j<=yukseklik-i; j++)
           printf("  ");
            
        for(j=1; j<=2*i-1; j++)
           printf("* ");
     }
 

     getch();
}
