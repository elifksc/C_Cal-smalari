// Canl� Ders Uygulamas� - No: 087
// Girilen bir kelimenin uzunlu�unu bulur ve tersten yazd�r�r.

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
