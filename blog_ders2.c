#include<stdio.h>

 int main(){
   int kullanici_yasi;
   char kullanici_cinsiyeti;
   double kullanici_kilosu;

        printf("Yasinizi giriniz: ");
        scanf("%d",&kullanici_yasi); /* tam sayi girmek icin %d */

        printf("Kullanici Cinsiyetinizi Giriniz (E & K): ");
        scanf("%c",&kullanici_cinsiyeti); /* karakter girmek icin %c */

        printf("Kilonuzu giriniz:");
        scanf("%lf",&kullanici kilosu); /* ondalikli sayi girmek icin %lf yada %f */

    return 0;
}
