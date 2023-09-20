// Canlý Ders Uygulamasý - 3
// Girilen iki sayi arasinda beþ iþlem yapar.

#include<stdio.h>

main () {
     
     int a, b;
     
     printf("Lutfen iki tamsayi giriniz: ");
     scanf("%d %d", &a, &b);
     
     printf("\n%d + %d = %d\n", a, b, a+b);
     printf("%d - %d = %d\n", a, b, a-b);
     printf("%d x %d = %d\n", a, b, a*b);
     printf("%d : %d = %d\n", a, b, a/b);
     printf("%d mod %d = %d", a, b, a%b);

     getch();
     
} 
