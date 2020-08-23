#include<stdio.h>

int main(){
    	int sayi,bolen,bolum,i=1,adet=0;
    	printf("Incelenecek sayiyi giriniz(1-1000)=");
    	scanf("%d",&sayi);
    	if(sayi<1||sayi>1000){
    	printf("Girilen sayi (1-1000) arasinda degil!!!");
    	return 0;
		}
    	for(bolen=1;bolen<sayi;bolen++){
    		bolum=sayi%bolen;
    		if(bolum==0){
    			printf("%d.Sayi=%d \n",i,bolen);
    			i++;
    			adet++;
    		}
    	}
    	printf("Toplam bolen sayisi=%d",adet);
    	return 0; 
    	
		}
