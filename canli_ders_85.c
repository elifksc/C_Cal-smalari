// Canl� Ders Uygulamas� - No: 085
// Kullan�c�n�n girdi�i bir kelimeyi karakter dizisine atar ve ekrana yazd�r�r.

#include<stdio.h>
#include<windows.h>

main(){
       char kelime[50];
       int i;
       
       printf("Kelimenizi giriniz: ");
       scanf("%s", kelime);
       printf("%s", kelime);
       printf("\n");
       sleep(500);
       
       i=0;
       
       while(kelime[i] != '\0'){
            printf("%c", kelime[i]);
            i++;
       }
           
       printf("\n");
       sleep(500); 
       
       for(i=0; kelime[i] != '\0'; i++){
           
           printf("%c", kelime[i]);
       }
       
       getch();
}
