// Canl� Ders Uygulamas� - 33
// Girilen kenar degerine g�re; i�i bo� kare fig�r� olu�turur.
// METOT: Deseni par�ala

/*
* * * * *       ilk sat�r
-----------------------
*       *  
*       *       ara sat�r  
*       *
-----------------------
* * * * *       son sat�r

*/ 

#include<stdio.h>

main () {
     
     int kenar, i, j; 
     
     printf("Kenar degerini giriniz: ");
     scanf("%d", &kenar);
     
     printf("\n");

     for(i=1; i<=kenar; i++)
        printf("* ");
        
     printf("\n");   
  
     for(i=1; i<=kenar-2; i++){
        
        for(j=1; j<=kenar; j++){
                 
           if(j==1 || j==kenar)
             printf("* ");
           
           else
             printf("  ");             
        }
        printf("\n");
     }  
     
     for(i=1; i<=kenar; i++)
        printf("* ");
 

     getch();
}
