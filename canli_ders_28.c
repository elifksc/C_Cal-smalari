// Canl� Ders Uygulamas� - 28
// Girilen kenar uzunluklar�na g�re; dikd�rtgen fig�r� olu�turur.

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
