// Canlý Ders Uygulamasý - 31
// Girilen kenar uzunluðuna göre; dikey simetriði alýnmýþ bir ikizkenar dik üçgen oluþturur.

/*
           
        *       1. SATIRDA 4 ADET BOÞLUK 1 ADET * VAR       
      * *       2. SATIRDA 3 ADET BOÞLUK 2 ADET * VAR    
    * * *       .                          .   
  * * * *       .                          . 
* * * * *       5. SATIRDA 0 ADET BOÞLUK 5 ADET * VAR   

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
