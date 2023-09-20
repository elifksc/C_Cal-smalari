// Canlý Ders Uygulamasý - 12
// Girilen bir not degerinin DDS'deki harf notu karþýlýðýný bulur.

#include<stdio.h>

main () {
     
     int not;
     
     printf("Notunuzu giriniz: ");
     scanf("%d", &not);
     
     if (not >= 90)
       printf("AA");
       
     else if (not >= 85)
       printf("BA");
       
     else if (not >= 80)
       printf("BB");
       
     else if (not >= 75)
       printf("CB");
       
     else if (not >= 65)
       printf("CC");
       
     else if (not >= 55)
       printf("DC");
       
     else if (not >= 50)
       printf("DD");
       
     else
       printf("FF");
     
     getch();
     
}
