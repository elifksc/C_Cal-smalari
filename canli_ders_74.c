// Canlı Ders Uygulaması - 74
// Tek - çift - tek - çift ... şeklinde sıralanmış olması şartıyla;
// girilen adet kadar rastgele iki basamaklı sayılar üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
       
       int adet, rastgele, isaret=1;
       srand(time(NULL));
       
       printf("Sayi adedini giriniz: ");
       scanf("%d", &adet);
       
       while(adet>0){
           
           rastgele = 10 + rand() % 90;
           
           if(isaret == 1 && rastgele % 2 == 1){
             printf("%d ", rastgele);
             adet--;
             isaret = 2;
           }
           
           else if(isaret == 2 && rastgele % 2 == 0){
             printf("%d ", rastgele);
             adet--;
             isaret = 1;
           }
       } 
       getch();       
}
