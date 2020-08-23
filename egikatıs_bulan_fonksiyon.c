#include <stdio.h>
#include <math.h>
void Toplammesafe(int h,int a,float s){
	float mesafe;

	mesafe=h*cos(a*M_PI/180)*s;
	printf("Cisim %.2f m uzaga duser",mesafe);

    
}
 
 
int main() {
int hiz;
int aci;
float sure;

printf("Ilk hizi giriniz(m/s):");
scanf("%d",&hiz);
printf("Aciyi giriniz(derece):");
scanf("%d",&aci);
printf("Havada Kalma suresi:");
scanf("%f",&sure);
Toplammesafe(hiz,aci,sure);




  
return 0;
}
