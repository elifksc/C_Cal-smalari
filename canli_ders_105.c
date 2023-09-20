// Canlý Ders Uyglamasý - 105
// Bir metin dosyasýndan (.txt / ANSI formatlý) veri okuma
// Versiyon 1

#include<stdio.h>

main(){
       FILE *elif;
       int i, sayi;
       
       elif = fopen("deneme.txt", "r");
       
       if(elif == NULL)
         printf("Dosya Bulunamadi.");
         
       else{
            for(i=0; i<10; i++){
               
               fscanf(elif, "%d", &sayi);
               printf("%d ", sayi);
            }    
       }
       
       fclose(elif);
       getch();
}
