// Canl� Ders Uygulamas� - 109
// Bir metin dosyas�ndaki �ifrelenmi� bir metni bir �ifreleme tablosu kullanarak
// ��zer ve bir ba�ka metin dosyas�na ��z�lm�� haliyle yazd�r�r.

#include<stdio.h>

main(){
       FILE *dosya1, *dosya2, *dosya3;
       char harf;
       int sayi, deger;
       
       dosya1 = fopen("girdi2.txt", "r");
       dosya2 = fopen("tablo.txt", "r");
       dosya3 = fopen("sifrelicozum.txt", "w");
       
       if(dosya1 == NULL || dosya2 == NULL)
          printf("Girdi ya da �ifreleme dosyas� yok.\n");
         
       else{
            
            while(1){
                 
                 fscanf(dosya1, "%d", &sayi);
                 
                 dosya2 = fopen("tablo.txt", "r");
                 
                 while(1){
                      
                      fscanf(dosya2, "%c %d\n", &harf, &deger);
                      
                      if(sayi == deger)
                         break;
                 }
                 
                 fclose(dosya2);
                  
                 if(feof(dosya1))
                    break;
                  
                 fprintf(dosya3, "%c", harf);
            }
       }
       
       fclose(dosya1);
       fclose(dosya2);
       fclose(dosya3);
}
