// Canl� Ders Uygulamas� - No: 094
// Girilen ve 0-1'lerden olu�an rakam blo�undaki 1 rakamlar�ndan 
// olu�an bloklar�n uzunluklar�n� bulur.
// Bo�luklu versiyon. -1 girilene kadar.
// Kare Karalamaca Bulmacas� / Nonogram / Picross

#include<stdio.h>

main () {
     
     int ali[100] = {0}, i, j, adet = 0, rakam = 0, kac_tane;
     
     printf ("Rakam blogunu (0 ya da 1) giriniz: ");
     
     while (rakam != -1) {
           
        scanf ("%d", &rakam);
        ali[adet] = rakam;
        adet ++;
     }  
     
     // 0 0 1 1 1 0 1 1 0 0 0 1 0 0 1 1 1 1 1 -1

    for(i=0; i<adet; i++) {
    
       kac_tane = 0;
    
        for(j=i; ali[j]==1; j++)
            kac_tane ++;
        
        i = j;
        
        if (kac_tane > 0)
           printf ("%d ", kac_tane);
    }

    getch ();

}
