#include <stdio.h>
void Obeb_Bul(int sayi1,int sayi2){
	int  kucukSayi;
    int i, obeb = 1, sonuc;
    
    if (sayi1 < sayi2)
        kucukSayi = sayi1;
    else
        kucukSayi = sayi2;
 
    for (i = 2; i <= kucukSayi; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0)
            obeb = i;
    }
    sonuc =  obeb;
    printf("OBEB(%d,%d) = %d", sayi1, sayi2, sonuc);
    
}
 
int main() {
	Obeb_Bul(24,32);//bulmak istediðimiz obeb istersek klavyedende alabilirz 
	
return 0;
}
