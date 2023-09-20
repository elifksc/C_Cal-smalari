// Canlý Ders Uygulamasý - 13 
// "SAYI OPERATÖR SAYI" formatýnda girilen dört iþlemin sonucunu bulur.

#include<stdio.h>

main () {
     
     int s1, s2;
     char islem;
     
     printf("Dort isleminizi giriniz: ");
     scanf("%d %c %d", &s1, &islem, &s2);
     
     switch (islem){
            
            case '+':
            printf("%d %c %d = %d", s1, islem, s2, s1+s2);
            break;
            
            case '-':
            printf("%d %c %d = %d", s1, islem, s2, s1-s2);
            break;
            
            case 'x':
            printf("%d %c %d = %d", s1, islem, s2, s1*s2);
            break;
            
            case '.':
            printf("%d %c %d = %d", s1, islem, s2, s1*s2);
            break;
            
            case ':':
                 
            if (s2 == 0)
               printf("Tanimsiz.");
            
            else
               printf("%d %c %d = %d", s1, islem, s2, s1/s2);
               
            break;
            
            default:
            printf("Gecersiz Giris!");
            break;
     }
     
     getch();
     
}
