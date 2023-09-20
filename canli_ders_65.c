// Canlý Ders Uygulamasý - 65
// Bir sayýyý oluþturan rakamlardan bir ya da birkaçýnýn 
// yerinin deðiþtirilmesiyle elde edilen yeni sayýya ilk
// sayýnýn ikizi denir. Bu tanýmlamaya göre; girilen iki sayýnýn birbirinin ikizi olup olmadýðýný bulur.

#include<stdio.h>

main(){
       int sayi1, sayi2, dizi1[10], dizi2[10], hata = 0, adet1=0, adet2=0, i, j, depo1, depo2;
       
       printf("Iki sayi giriniz: ");
       scanf("%d %d", &sayi1, &sayi2);
       
       if(sayi1 == sayi2)
         hata = 1;
       
       while(sayi1>0){
             
             dizi1[adet1] = sayi1 % 10;
             sayi1 = sayi1/10;
             adet1++;
       }
       
       for(i=0; i<adet1; i++){
          for(j=0; j<adet1; j++){
             if(dizi1[j] > dizi1[j+1]){
               depo1 = dizi1[j];
               dizi1[j] = dizi1[j+1];
               dizi1[j+1] = depo1;
             }
          }
       }

       while(sayi2>0){
             
             dizi2[adet2] = sayi2 % 10;
             sayi2 = sayi2/10;
             adet2++;
       }
       
       for(i=0; i<adet2; i++){
          for(j=0; j<adet2; j++){
             if(dizi2[j] > dizi2[j+1]){
               depo2 = dizi2[j];
               dizi2[j] = dizi2[j+1];
               dizi2[j+1] = depo2;
             }
          }
       }
          
       for(i=0; i<adet1; i++){   
          if(dizi1[i] != dizi2[i])
            hata = 1;
       }
       
       if(hata == 0)
            printf("Ikiz sayilardir");
       
       else  
         printf("Ikiz sayi degillerdir.");
       
       getch();
}
