// Canlý Ders Uygulamasý - 28
// Girilen kenar uzunluklarýna göre; dikdörtgen figürü oluþturur.

#include<stdio.h>

main () {
     
     int kisa, uzun, i, j; 
     
     printf("Kenar uzunluklarini giriniz: ");
     scanf("%d %d", &kisa, &uzun);


     for(i=0; i<kisa; i++){
                  
        printf("\n");
            
        for(j=0; j<uzun; j++)
           printf("* ");        
     }
 

     getch();
}
