// Canlý Ders Uygulamasý - 54
// -1 yazýlana kadar girilen en çok 10 tane sayý arasýndaki matematiksel iliþkiyi 
// "<, >, =" sembolleriyle ekranda gösterir.

#include <stdio.h>

main(){
       
       int dizi[11], i = 0, sayi = 0;     
       printf("En cok 10 adet sayi giriniz: ");
       
       while(sayi != -1){                        
          scanf("%d", &sayi); 
          dizi[i] = sayi;
          i++;   
       }
       for(i=0; dizi[i] != -1; i++){
                
           printf("%d ", dizi[i]);
                
           if(dizi[i+1] != -1){

             if(dizi[i] > dizi[i+1])   
               printf(" > ");
               
             else if(dizi[i] < dizi[i+1])   
               printf(" < ");          
           
             else 
               printf(" = ");      
           }     
       } 
       getch(); 
}
