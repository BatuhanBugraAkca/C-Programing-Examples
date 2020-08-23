#include <stdio.h>
 
int main() {
 
    int sayi1, sayi2, buyukSayi;
    int i = 2, sonuc = 1;
    int gecici1, gecici2, kontrol;
 
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
 
    if (sayi1 > sayi2)
        buyukSayi = sayi1;
    else
        buyukSayi = sayi2;
 
 
    gecici1 = sayi1;
    gecici2 = sayi2;
 
    while (i <= buyukSayi) {
        kontrol = 0;
        if (gecici1 % i == 0) {
            gecici1 /= i;
            kontrol++;
        }
        if (gecici2 % i == 0) {
            gecici2 /= i;
            kontrol++;
        }
        if (kontrol != 0)
            sonuc *= i;
 
        if (gecici1 % i != 0 && gecici2 % i != 0)
            i++;
    }
 
    printf("OKEK(%d,%d) = %d", sayi1, sayi2, sonuc);
    return 0;
 
}
