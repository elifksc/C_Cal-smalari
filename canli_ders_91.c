// Canlý Ders Uygulamasý - No: 091
// Türkçeye özgü karakterler (Ç, Ð, Ý, Ö vb.) kullanýlmaksýzýn 
// büyük harflerle yazýlmýþ bir metinde hangi harften kaç tane 
// olduðunu ekrana yazar.

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
