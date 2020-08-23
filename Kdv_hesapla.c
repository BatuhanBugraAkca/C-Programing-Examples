#include<stdio.h>
int main(){
	
	int toplamtutar;
	int kdv;
	int x;
	int kdvoran;
	int kdv_haric;
	
	printf("KDV dahil toplam tutari giriniz (TL):");
	scanf("%d",&toplamtutar);
	printf("KDV oranini giriniz %  :");
	scanf("%d",&kdvoran);
	printf("---------------------------------------\n");
	kdv_haric=toplamtutar/(kdvoran+1);//bu denklemde kdv_harýc parentezine alýrsak toplamtutar=kdv_haric(kdvoran+1) gelir buda = toplamtutar/kdvoran+1=kdvharic
	kdv=toplamtutar-kdv_haric;
	
    printf("Hesaplanan KDV miktari      : %d\n",kdv);
    printf("KDV hariç mal hizmet bedeli : %d \n",kdv_haric);
	
		
  

	
	
	
	return 0;
}
