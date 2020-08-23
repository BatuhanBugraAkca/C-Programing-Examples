#include <stdio.h>

 
int main() {
	int binek=0;
	int ticari=0;
	int otobus=0;
	int kamyon=0;
	int ismakinesi=0;
	int tur;
	int toplam;
	
	printf("Arac turunu giriniz (Durdurmak icin 0)");
	scanf("%d",&tur);
	while(tur!=0){
		if(tur==1){
		binek++;	
		
		}
		if(tur==2){
		ticari++;	
		
		}
		if(tur==3){
		otobus++;	
		
		}
		if(tur==4){
		kamyon++;	
		
		}
		if(tur==5){
		ismakinesi++;	
		
		}
		if(tur>5||tur<1){
			
		printf("Hata lutfen gecerli bir kod giriniz (1-5)\n");
						
		}
		
	printf("Arac turunu giriniz (Durdurmak icin 0)");
	scanf("%d",&tur);
			
		
	}
	toplam=binek+ticari+otobus+kamyon+ismakinesi;
	
	printf("-------------------------------------------------\n");
	printf("Toplam %d arac muayenesi tamamlanmistir.\n",toplam); 
	printf("Arac turlerine gore toplam sayilar.\n");
	printf("%d Binek arac.\n",binek); 
 	printf("%d Ticari \n",ticari); 
	printf("%d Otobus \n",otobus); 
	printf("%d kamyon arac\n",kamyon); 
	printf("%d ismakinesi\n",ismakinesi); 



	
	
  
return 0;
}
