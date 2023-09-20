// Canlý Ders Uygulamasý - 33
// Girilen kenar degerine göre; içi boþ kare figürü oluþturur.
// METOT: Deseni parçala

/*
* * * * *       ilk satýr
-----------------------
*       *  
*       *       ara satýr  
*       *
-----------------------
* * * * *       son satýr

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
