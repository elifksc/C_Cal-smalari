// Canl� Ders Uygulamas� - 32
// Girilen kenar uzunlu�una g�re; dikey simetri�i al�nm�� bir ikizkenar dik ��gen olu�turur.

/*
           
        *             1. SATIRDA 4 ADET BO�LUK 1 ADET * VAR       
      * * *           2. SATIRDA 3 ADET BO�LUK 3 ADET * VAR    
    * * * * *         3. SATIRDA 2 ADET BO�LUK 5 ADET * VAR
  * * * * * * *       4. SATIRDA 1 ADET BO�LUK 7 ADET *                        . 
* * * * * * * * *     5. SATIRDA 0 ADET BO�LUK 9 ADET * VAR   

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
