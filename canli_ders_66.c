// Canl� Ders Uygulamas� - 66
// Girilen sat�r ve s�tun say�lar�na sahip, -1 girilene kadar
// belirtilen s�tunlar� bir birim a�a��ya do�ru �telenmi� bir
// dikd�rtgen deseni olu�turur.

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
