// Canl� Ders Uygulamas� - 67
// belirtilen aral�ktaki pozitif tam say�lar� yazmak i�in
// en �ok hangi rakamlar�n kullan�lmas� gerekti�ini bulur.

#include<stdio.h>

main(){
       int rakamlar[10] = {0}, baslangic, bitis, i, j, k, sayi, maks = 0, min = 1000;
       
       printf("Sayi araligini giriniz: ");
       scanf("%d %d", &baslangic, &bitis);
       
       for(i=baslangic; i<=bitis; i++){
       
           sayi = i;
           
           while(sayi>0){
                         
                rakamlar[sayi % 10]++;
                sayi = sayi / 10;
                         
           }
       }  
            
       // en k���k de�eri buluyoruz.
       for(j=0; j<10; j++){ 
          
          if(rakamlar[j] < min)
            min = rakamlar[j];      
       }
       
       // en b�y�k de�eri buluyoruz.
       for(i=0; i<10; i++){ 
          
          if(rakamlar[i] > maks)
            maks = rakamlar[i];      
       }
       
       printf("En cok tekrar eden rakamlar: ");
       
       for(i=0; i<10; i++){ 
          if(rakamlar[i] == maks)
            printf("%d ", i);  
       }
       
       printf("\nEn az tekrar eden rakamlar: ");
       
       for(j=0; j<10; j++){ 
                
          if(rakamlar[j] == min)
            printf("%d ", j);    
       }
       
       printf("\nHic tekrar etmeyen rakamlar: ");
       
       for(j=0; j<10; j++){ 
                
          if(rakamlar[j] == 0)
            printf("%d ", j);
       }
       
       getch();

}
