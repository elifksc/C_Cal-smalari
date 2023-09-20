// Canl� Ders Uygulamas� - 80
// Bir sayi bir ba�ka say�n�n herhangi bir dereceden (>1) �ss� olarak
// ifade edilebiliyorsa, o say�ya kral say denir.

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
