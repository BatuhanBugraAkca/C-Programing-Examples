#include <stdio.h>
//Bu örnekte ise iç içe ifleri kullanýp calýsanlarýn konumlarýna göre izin hesaplamasý yapan program
 
int main() {
	char calisan;
	int calisanyil;
	int izin=0;
	
	printf("Calisan (i,I,t,T,m,M): ");
	scanf("%c",&calisan);
	printf("Calisilan yil: ");
	scanf("%d",&calisanyil);
	
	if(calisan=='i'||calisan=='I'){
		if(2<=calisanyil&&calisanyil<5)
		izin=30;
		if(calisanyil>=5)
		izin=40;
			
	}
	if(calisan=='t'||calisan=='T'){
		if(2<calisanyil&&calisanyil<6)
		izin=25;
		if(calisanyil>=6)
		izin=35;
			
	}
	if(calisan=='m'||calisan=='M'){
		if(2<calisanyil&&calisanyil<4)
		izin=20;
		if(calisanyil>=4)
		izin=30;
			
	}

	printf("Toplam %d gun yillik izin hakki vardir.",izin);

	
	
  
return 0;
}
