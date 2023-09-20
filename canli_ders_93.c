// Canlý Ders Uygulamasý - No: 093
// Negatif bir rakam yazýlana kadar girilen rakamlardan kaçýnýn tek 
// kaçýnýn çift sayý olduðunu bulur.

#include<stdio.h>

main(){
       int rakam, tek=0, cift=0;
       
       printf("Sayi giriniz: ");
       
       while(1){ 
            scanf("%d", &rakam);
            
            if(rakam < 0)
              break;
            
            if(rakam % 2 == 0)
              cift++;
            
            else
              tek++;
       }
       
       printf("\nTek sayi = %d\nCift sayi = %d", tek, cift);
       getch();
}
