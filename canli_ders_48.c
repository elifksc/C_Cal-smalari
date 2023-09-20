// Canlý Ders Uygulamasý - 48
// 0 girilene kadar girilen pozitif tam sayýlar arasýndaki en büyük ve en küçük degeri bulur.

#include <stdio.h>


main () {
     
     int sayi, mak = 0, min = 1000000000 ;
     
     while(1){
              
        scanf("%d", &sayi);
        
        if(sayi == 0)
          break;
          
        if(sayi > mak)
          mak = sayi;
        
        if(sayi < min)
          min = sayi;      
     }
     
     if(mak == 0)
       printf("Herhangi bir sayi girmediniz. ");
     
     else
       printf("Maksimum = %d ve Minimum = %d", mak, min);

     getch();
}
