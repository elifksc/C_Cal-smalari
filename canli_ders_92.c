// Canlý Ders Uygulamasý - No: 092
// Girilen bir kelimede geçen ve yine girilen bir harfin (küçük veya büyük)
// en son kaçýncý sýradaki harf olduðunu bulur.

#include<stdio.h>

main(){
       char kelime[100], harf;
       int i, sabit, sira = -1;
       
       printf("Kelime ve harf Giriniz: ");
       scanf("%s %c", kelime, &harf);
       
       if(harf >= 65 && harf <=90)
         sabit = 32;
         
       else
         sabit = -32;
         
       for(i=0; kelime[i] != '\0'; i++){
          if(kelime[i] == harf || kelime[i] == harf + sabit)
             sira = i+1;
       }
         
       if(sira == -1)
         printf("Aradiginiz harf yok.");
         
       else
         printf("Sira numarasi = %d", sira);

       getch();
}
