#include<stdio.h>

int main(){
	
	int yas;
	float boy;
	float kilo;
    float index;
	
	printf("Yasini giriniz:");
	scanf("%d",&yas);
	printf("Kilonuzu giriniz:");
	scanf("%f",&kilo);
	printf("Boyunuzu giriniz:");
	scanf("%f",&boy);
	
	index=kilo/(boy*boy);
	printf("-------------------------------- \n");
	
	printf("Vucut kitle indeksiniz  : %.2f \n",index);

	
	if(index>18.50 && index<24.99)
	printf("Tebrikler askeri liseye girebilirsiniz \n");
	
	else
	printf("Giremezsiniz");
	
		

	
	
	
	return 0;
	
	
	
	
}
