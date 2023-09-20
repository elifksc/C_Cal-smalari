// Canl� Ders Uygulamas� - No: 097
// Girilen boyutta ve rakamlar� 1-4 aras�ndaki rastgele rakamlardan olu�an
// bir kare matris olu�turur ve her defas�nda 1, 2, 3 ve 4 rakamlar�ndan
// s�ras�yla biri olmadan matrisi ekrana yazd�r�r

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
