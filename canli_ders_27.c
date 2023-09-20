// Canlý Ders Uygulamasý - 27
// ÝLK ÇOK KATLI (2 KATLI) DÖNGÜ (ÝÇ ÝÇE DÖNGÜ) ÖRNEÐÝ
// Girilen kenar uzunluðuna göre; bir kare figürü oluþturur.

#include<stdio.h>

main () {
     
     int kenar, i, j; 
     
     printf("Kenar boyutunu giriniz: ");
     scanf("%d", &kenar);
     
     for(i=0; i<kenar; i++){
        
        printf("\n");      
        
        for(j=0; j<kenar; j++)
           printf("* ");
              
     }
        
     
     
     
     
     getch();
}
