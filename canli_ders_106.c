// Canlý Ders Uygulamasý - 106
// Bir metin dosyasýna veri yazma

#include<stdio.h>

main(){
       FILE *ayse;
       int i;
       
       ayse = fopen("marmara.txt", "w");
       
       for(i=1; i<=15; i=i+2)
          fprintf(ayse, "%d ", i);
       
       fclose(ayse);
       getch();
}
