// Canl� Ders Uygulamas� - No: 096
// Girilen boyut de�erine g�re elemanlar� 1-9 aras�nda rastgele
// rakamlardan olu�an bir kare matris olu�turur, transpozesini
// ekrana yazd�r�r.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
       int dizi[100][100], i, j, boyut;
       srand(time(NULL));
       
       printf("Boyut giriniz: ");
       scanf("%d", &boyut);
       
       for(i=0; i<boyut; i++){
          
          printf("\n");
             
          for(j=0; j<boyut; j++){
              
              dizi[i][j] = 1 + rand() % 9;
              printf("%d ", dizi[i][j]);     
          
          }
       }
       
       printf("\n");
       
       for(i=0; i<boyut; i++){
          
          printf("\n");
             
          for(j=0; j<boyut; j++){

              printf("%d ", dizi[j][i]);     
          }
       }
       getch();
}
