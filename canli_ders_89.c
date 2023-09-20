// Canlý Ders Uygulamasý - No: 089
// Girilen kelimenin harflerinden oluþan bir dik üçgen figürü oluþturur.

#include<stdio.h>

main(){
       char kelime[100];
       int i, j, uzunluk;
       
       printf("Kelime Giriniz: ");
       scanf("%s", kelime);
       
       i=0;
       uzunluk=0;
       
       while(kelime[i] != '\0'){
            i++;
            uzunluk++;
       }
       
       for(i=0; i<uzunluk; i++){
          
          printf("\n");
                
          for(j=0; j<=i; j++)
             printf("%c", kelime[i]);
       }
       
       getch();

}
