// Canlý Ders Uygulamasý - 107
// Ýki farklý metin belgesindeki rakamlardan rastgele rakamlar
// seçip iki basamaklý bir sayý oluþturur ve bunu cikti.txt isimli
// belgeye yazdýrýr.

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
