// Canl� Ders Uygulamas� - 27
// �LK �OK KATLI (2 KATLI) D�NG� (�� ��E D�NG�) �RNE��
// Girilen kenar uzunlu�una g�re; bir kare fig�r� olu�turur.

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
