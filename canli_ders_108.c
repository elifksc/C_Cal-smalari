// Canl� Ders Uygulamas� - 108
// Bir metin dosyas�ndaki bir metni bir �ifreleme tablosu kullanarak
// �ifreler ve bir ba�ka metin dosyas�na �ifrelenmi� haliyle yazd�r�r.

#include<stdio.h>

main(){
       
       FILE *dosya1, *dosya2, *dosya3;
       char karakter, harf;
       int deger;
       
       dosya1 = fopen("girdi.txt", "r");
       dosya2 = fopen("tablo.txt", "r");
       dosya3 = fopen("sifreli.txt", "w");
       
       if(dosya1 == NULL || dosya2 == NULL)
          printf("Girdi ya da �ifreleme dosyas� yok.\n");
         
       else{
            
            while(1){
                 
                 fscanf(dosya1, "%c", &karakter);
                 
                 dosya2 = fopen("tablo.txt", "r");
                 
                 while(1){
                      
                      fscanf(dosya2, "%c %d\n", &harf, &deger);
                      
                      if(karakter == harf)
                         break;
                 }
                 
                 fclose(dosya2);
                  
                 if(feof(dosya1))
                    break;
                  
                 fprintf(dosya3, "%d ", deger);
            }
       }
       
       fclose(dosya1);
       fclose(dosya2);
       fclose(dosya3);
}
