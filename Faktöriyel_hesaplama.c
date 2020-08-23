
#include<stdio.h>

main(){
       int sayi,i,carpim=1;
       printf("Sayi : ");
       scanf("%d",&sayi);
      
       for(i=1;i<=sayi;i++)
       {
          carpim = i * carpim;                    
       }      
      
       printf("\n\n%d ! = %d",sayi,carpim);
      
       return 0;
}
