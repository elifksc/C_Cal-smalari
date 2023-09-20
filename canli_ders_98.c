// Canlý Ders Uygulamasý - No: 098
// 4x4 boyutlarýndaki bir matrisin herhangi bir satýr veya herhangi bir
// sütununda, girilen rakam çiftinin ardýþýk olarak olup olmadýðý konutrol eder.

#include<stdio.h>

main(){
       int dizi[4][4], i, j, rakam1, rakam2, buldum=0;
       
       printf("4 x 4 boyutunda bir tam sayi matrisi giriniz: ");
       printf("\n");
       
       for(i=0; i<4; i++){
          for(j=0; j<4; j++){
             scanf("%d", &dizi[i][j]);   
          }
       }
       
       printf("\nSayi ciftini giriniz: ");
       scanf("%d %d", &rakam1, &rakam2);
       
       // Satýr Bazlý Tarama
       for(i=0; i<4; i++){
          for(j=0; j<3; j++){
             
             if(dizi[i][j] == rakam1 && dizi[i][j+1] == rakam2)
               buldum = 1;
           
          }
       }
       
       // Sutun Bazlý Tarama
       for(i=0; i<4; i++){
          for(j=0; j<3; j++){
             
             if(dizi[j][i] == rakam1 && dizi[j+1][i] == rakam2)
               buldum = 1;
           
          }
       }
       if(buldum == 1)
         printf("EVET VAR");
       else
         printf("HAYIR YOK");
         
       getch();
}
