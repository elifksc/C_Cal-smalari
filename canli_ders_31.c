// Canl� Ders Uygulamas� - 31
// Girilen kenar uzunlu�una g�re; dikey simetri�i al�nm�� bir ikizkenar dik ��gen olu�turur.

/*
           
        *       1. SATIRDA 4 ADET BO�LUK 1 ADET * VAR       
      * *       2. SATIRDA 3 ADET BO�LUK 2 ADET * VAR    
    * * *       .                          .   
  * * * *       .                          . 
* * * * *       5. SATIRDA 0 ADET BO�LUK 5 ADET * VAR   

*/

#include<stdio.h>

main () {
     
     int kenar, i, j; 
     
     printf("Kenar uzunlugunu giriniz: ");
     scanf("%d", &kenar);


     for(i=1; i<=kenar; i++){
                  
        printf("\n");
        
        for(j=1; j<=kenar-i; j++)
           printf("  ");
            
        for(j=1; j<=i; j++)
           printf("* ");
     }
 

     getch();
}
