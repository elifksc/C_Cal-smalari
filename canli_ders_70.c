// Canl� Ders Uygulamas� - 70
// Bir milyardan k���k olmak �zere; girilen ve i�inde s�f�r rakam� bulunmayan pozitif bir tam say�n�n
// rakamlar�n�n t�m�n� kullanarak rastgele yeni bir say� �retir. 


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
