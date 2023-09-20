// Canlý Ders Uygulamasý - 70
// Bir milyardan küçük olmak üzere; girilen ve içinde sýfýr rakamý bulunmayan pozitif bir tam sayýnýn
// rakamlarýnýn tümünü kullanarak rastgele yeni bir sayý üretir. 


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
       int sayi, adetler[10] = {0}, adet =0, rastgele;
       srand(time(NULL));
       
       printf("Sayi giriniz: ");
       scanf("%d", &sayi);
       printf("Rastgele uretilen yeni sayi: ");
       
       while(sayi > 0){
            
            adetler[sayi%10]++;
            sayi = sayi /10;
            adet++;
       }
       
       while(adet>0){
           
           rastgele = 1 + rand() % 9;
           
           if(adetler[rastgele] > 0){
                             
             printf("%d", rastgele);
             adet--;
             adetler[rastgele]--;
           }
       }
       getch();
}
