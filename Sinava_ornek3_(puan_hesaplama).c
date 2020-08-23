#include<stdio.h>

int main(){
	
int trafik;
int motor;
int ilk;

float trafikpuan;
float motorpuan;
float ilkpuan;


printf("Trafik yanlis sayisini giriniz:\n");
scanf("%d",&trafik);
printf("Motor yanlis sayisini giriniz:\n");
scanf("%d",&motor);
printf("Ilk yardim yanlis sayisini giriniz:\n");
scanf("%d",&ilk);


trafikpuan=100-(trafik*2);
motorpuan=100-(motor*2.5);
ilkpuan=100-(ilk*3.334);
printf("-------------------------------------------------------------------\n");
printf("Trafik puaniniz :%.2f \n",trafikpuan);
printf("Motor pauniniz: %.2f \n",motorpuan);
printf("Ilk puaniniz :%.2f \n",ilkpuan);	
	return 0;
	
	
	
	
}
