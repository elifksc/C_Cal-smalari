// Canl� Ders Uygulamas� - No: 088
// Girilen bir kelimedeki b�y�k harfleri k���k harfe, 
// k���k harfleri ise b�y�k harfe d�n��t�r.

#include <stdio.h>

main(){
       char kelime[100];
       int i;
       
       printf("Kelimenizi Giriniz: ");
       scanf("%s", kelime);
       
       for(i=0; kelime[i] != '\0'; i++){
           
           if(kelime[i] >= 65 && kelime[i] <= 90)
             printf("%c", kelime[i]+32);
             
           else
             printf("%c", kelime[i]-32);
          
       }

       getch();
}
