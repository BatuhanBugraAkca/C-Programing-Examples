#include <stdio.h>

int main(){
    
    int i, j,a,tip,yildizSayisi=1;
    printf("Dik u�gen icin 1'e ters dik ��gen i�in 2 ye bas�n (��kmak i�in 66 ya)");
    scanf("%d",&tip);
      if(tip==33){
    	return 0;
	}
    printf("Ucgen boyutunu giriniz");
 
    scanf("%d",&a);
    
   
   while(tip!=66){
   
	switch(tip){
		case 2:	
	{
	  yildizSayisi=a;
    for(i=0;i<a;i++){
        
		
		
        for(j=0;j<yildizSayisi;j++){
            printf("*");    
       
	    }
        
       
        printf("\n");
        
        
        yildizSayisi--;
    }
      break;  
    }
	
	
 		case 1:
	{
			 
	    for(i=0; i<a; i++){
        

        for(j=0; j<yildizSayisi; j++){
            printf("*");    
        }
        
       
        printf("\n");
        
        
        yildizSayisi++;
        
    }		
	}


}
	printf("Dik u�gen icin 1'e ters dik ��gen i�in 2 ye bas�n (��kmak i�in 66 ya)");
    scanf("%d",&tip);
    printf("Ucgen boyutunu giriniz");
 
    scanf("%d",&a);
}
	

	return 0;

}
