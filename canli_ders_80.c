// Canlý Ders Uygulamasý - 80
// Bir sayi bir baþka sayýnýn herhangi bir dereceden (>1) üssü olarak
// ifade edilebiliyorsa, o sayýya kral say denir.

#include<stdio.h>
#include<math.h>

main(){
       long long int sayi, carpim, i;
       
       printf("Sayi giriniz: ");
       scanf("%lld", &sayi);
       
       for(i=2; i<=sqrt(sayi); i++){
       
          carpim = 1;
          
          while(carpim < sayi)
            carpim = carpim * i;
               
          if(carpim == sayi)
            break;
       }
       
       if(carpim == sayi)
         printf("%lld sayisi kral sayidir.", sayi);
         
       else
         printf("%lld sayisi kral sayi degildir.", sayi);
         
       getch();
}
