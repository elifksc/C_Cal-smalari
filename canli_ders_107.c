// Canl� Ders Uygulamas� - 107
// �ki farkl� metin belgesindeki rakamlardan rastgele rakamlar
// se�ip iki basamakl� bir say� olu�turur ve bunu cikti.txt isimli
// belgeye yazd�r�r.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
       
       FILE *girdi , *cikti;
       int dizi[100], onlar , birler , sayi, adet;
       srand(time(NULL));
       
       girdi = fopen ("ilk.txt", "r");
       adet=0;
       
       while(!feof(girdi)){
            fscanf(girdi, "%d", &dizi[adet]);
            adet++;
       }
       
       fclose(girdi);
       
       onlar = dizi[rand() % adet] * 10;
       
       girdi = fopen("son.txt", "r");
       adet = 0;
       
       while(!feof(girdi)){
            fscanf(girdi, "%d", &dizi[adet]);
            adet++;
       }
       
       fclose(girdi);
       
       birler = dizi[rand() % adet];
       
       sayi = onlar + birler;
       
       cikti = fopen("cikti.txt", "w");
       fprintf(cikti, "%d", sayi);
       fclose(cikti);
}
