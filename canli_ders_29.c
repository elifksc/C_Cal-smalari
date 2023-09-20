// Canlý Ders Uygulamasý - 29
// Girilen kenar uzunluðuna göre; bir ikizkenar dik üçgen oluþturur.

/*

*                1. SATIRDA 1 ADET * VAR
* *              2. SATIRDA 2 ADET * VAR
* * *            3. SATIRDA 3 ADET * VAR
* * * *          .
* * * * *        .    
                 N. SATIRDA N ADET * VAR


*/

#include<stdio.h>

main () {
     
     int kenar, i, j; 
     
     printf("Kenar uzunlugunu giriniz: ");
     scanf("%d", &kenar);


     for(i=1; i<=kenar; i++){
                  
        printf("\n");
            
        for(j=1; j<=i; j++)
           printf("* ");
     }
 

     getch();
}
