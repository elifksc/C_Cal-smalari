// Canl� Ders Uygulamas� - No: 091
// T�rk�eye �zg� karakterler (�, �, �, � vb.) kullan�lmaks�z�n 
// b�y�k harflerle yaz�lm�� bir metinde hangi harften ka� tane 
// oldu�unu ekrana yazar.

#include<stdio.h>

main(){
       char kelime[100];       
       int i, j, adet;
       
       printf("Kelime Giriniz: ");
       scanf("%s", kelime);
       printf("\n");
       
       for(i=65; i<=90; i++){
                 
           adet=0;
           
           for(j=0; kelime[j] != '\0'; j++){  
               if(i == kelime[j])
                 adet++;
           }
           
           if(adet>0)
             printf("%c harfi %d adet\n", i, adet);    
       }
       
       getch();
}
