// Canlý Ders Uygulamasý - No: 096
// Girilen boyut deðerine göre elemanlarý 1-9 arasýnda rastgele
// rakamlardan oluþan bir kare matris oluþturur, transpozesini
// ekrana yazdýrýr.

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
