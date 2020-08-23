#include<stdio.h>
#include<stdlib.h>


int main(){
	system("color 0A");
	int i1,j1,k1;
	int i2,j2,k2;
	int i3,j3,k3;
	
	printf("1. Vekterorel buyuklukleri sirasiyla (i,j,k) olarak giriniz");
	scanf("%d %d %d",&i1,&j1,&k1);
	printf("2. Vekterorel buyuklukleri sirasiyla (i,j,k) olarak giriniz");
	scanf("%d %d %d",&i2,&j2,&k2);
	i3=(j1*k2)-(k1*j2);
	j3=(k1*i2)-(i1*k2);
	k3=(i1*j2)-(j1*i2);

	printf("---------------------------------------------\n");
	printf("Sonuc = %di %dj %dk",i3,j3,k3);
	
	


	
	
	return 0;

}
