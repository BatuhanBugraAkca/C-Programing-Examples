#include<stdio.h>

int main(){
	
	int sayi;
	int birler;
	int onlar;
	int yuzler;
	int binler;
	int toplam;
	int kupu;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	birler=sayi%10;

	onlar=((sayi-birler)%100)/10;

	yuzler=((sayi-(birler+(onlar*10)))%1000)/100;

	binler=((sayi-((yuzler*100)+(onlar*10)))%10000)/1000;
	
	
	toplam=birler+onlar+yuzler+binler;
	kupu=toplam*toplam*toplam;
	
    printf("----------------------------------------\n");

    if(kupu==sayi){
    	
    	printf("Girilen %d sayisi kupunu dolduran sayidir.\n",sayi);
    	
	}
    else
    printf("Girilen %d sayisi kupunu dolduran degildir \n",sayi);

	
	
	
	
	return 0;
	
	
	
	
}
