// Canlý Ders Uygulamasý - 66
// Girilen satýr ve sütun sayýlarýna sahip, -1 girilene kadar
// belirtilen sütunlarý bir birim aþaðýya doðru ötelenmiþ bir
// dikdörtgen deseni oluþturur.

#include<stdio.h>

main(){
       int satir, sutun, dizi[100] = {0}, i, j, numara;
       
       printf("Satir ve sutun sayilarini giriniz: ");
       scanf("%d %d", &satir, &sutun);
       
       printf("Otelenecek sutun numaralarini giriniz: ");
       
       while(1){
            
            scanf("%d", &numara);
            
            if(numara == -1)
              break;
              
            dizi[numara]++;
       } 
       
       for(i=1; i<=satir+1; i++){
          
          printf("\n");
                
          for(j=1; j<=sutun; j++){
                   
             if(i == 1 && dizi[j] > 0)
               printf("  ");
               
             else if(i == satir + 1 && dizi[j] == 0)
               printf("  ");
               
             else
               printf("* ");
          }
       }
          
      
       getch();

}
