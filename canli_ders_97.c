// Canlý Ders Uygulamasý - No: 097
// Girilen boyutta ve rakamlarý 1-4 arasýndaki rastgele rakamlardan oluþan
// bir kare matris oluþturur ve her defasýnda 1, 2, 3 ve 4 rakamlarýndan
// sýrasýyla biri olmadan matrisi ekrana yazdýrýr

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
       int dizi[100][100], boyut, i, j, k;
       srand(time(NULL));
       
       printf("Boyut giriniz: ");
       scanf("%d", &boyut);
       
       printf("\n");
       
       for(i=0; i<boyut; i++){     
           for(j=0; j<boyut; j++){
              dizi[i][j] = 1 + rand () % 4;
           }
       }
       
       for(k=1; k<=4; k++){
           for(i=0; i<boyut; i++){     
               for(j=0; j<boyut; j++){
                  
                  if(dizi[i][j] == k)
                    printf("- ");
                  else
                    printf("%d ", dizi[i][j]);
               }
               printf("\n");    
           }
           printf("\n");
       }     
       getch();
}
