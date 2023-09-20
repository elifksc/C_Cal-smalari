// Girilen sayi adedine (<10) g�re; her sat�rda 1 ila 9 aras�nda
// rastgele say� �retir, alt alta gelen herhangi iki say� ayn� oldu�unda sonlan�r
// ve bu s�reci ekranda g�sterir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
       
       int alt[10] = {0}, ust[10] = {0};
       int adet, i, cikis;
       srand(time(NULL));
       
       printf("Ayni satirdaki sayi adedini giriniz: ");
       scanf("%d", &adet);
       
       while(1){
           
           printf("\n");
           
           for(i=0; i<adet; i++){
              
              alt[i] = 1 + rand() % 9;
              printf("%d", alt[i]);
           }
           
           cikis = 0;
           
           for(i=0; i<adet; i++){    
               if(alt[i] == ust [i])
                 cikis = 1;     
           }
           
           if(cikis == 1)
             break;
           
           for(i=0; i<adet; i++)
              ust[i] = alt[i];
       }   
       getch();             
}
