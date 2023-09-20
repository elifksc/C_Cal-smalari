// Canlý Ders Uygulamasý - 30
// Girilen kenar uzunluðuna göre; bir ters ikizkenar dik üçgen oluþturur.

/*
           
* * * * *     1. SATIRDA 5 ADET * VAR    kenar - 0       
* * * *       2. SATIRDA 4 ADET * VAR    kenar - 1
* * *         .                          .   
* *           .                          . 
*             5. SATIRDA 1 ADET * VAR    kenar - 4   

*/

#include<stdio.h>

main () {
     
     int kenar, i, j; 
     
     printf("Kenar uzunlugunu giriniz: ");
     scanf("%d", &kenar);


     for(i=1; i<=kenar; i++){
                  
     printf("\n");
            
     for(j=1; j<=kenar-i+1; j++)
     printf("* ");
     
     }
 

     getch();
}
