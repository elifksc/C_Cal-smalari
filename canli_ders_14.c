// Canlý Ders Uygulamasý - 14
// 0-9 arasýnda girilen bir sayýnýn okunuþunu ekrana yazdýrýr.

#include<stdio.h>

main () {
     
     int sayi;
     
     
     printf("0 ila 9 arasinda bir sayi giriniz: ");
     scanf("%d", &sayi);
     
     switch (sayi){
            
            case 1:
            printf("Bir");
            break;
            
            case 2:
            printf("Iki");
            break;
            
            case 3:
            printf("Uc");
            break;
            
            case 4:
            printf("Dort");
            break;
            
            case 5:
            printf("Bes"); 
            break;
            
            case 6:
            printf("Alti"); 
            break;
            
            case 7:
            printf("Yedi"); 
            break;
            
            case 8:
            printf("Sekiz"); 
            break;
            
            case 9:
            printf("Dokuz"); 
            break;
            
            default:
            printf("Hatali Giris!");
            break;
     }
     
     getch();
     
}
