// Canlý Ders Uygulamasý - No: 087
// Girilen bir kelimenin uzunluðunu bulur ve tersten yazdýrýr.

main(){
       char kelime[100];
       int i, uzunluk;
       
       printf("Kelimenizi Giriniz: ");
       scanf("%s", kelime);
       
       for(uzunluk=0; kelime[uzunluk] != '\0'; uzunluk++);
       
       for(i=uzunluk-1; i>=0; i--)
          printf("%c",kelime[i]);
       
       getch();
}
